#include <iostream>
#include "easyx.h"
#include "pig.h"
#include "dog.h"
#include "hen.h"
#include "cattle.h"
#include "sheep.h"
#include "house.h"
#include <conio.h>

#pragma warning(disable:4996)
int main()
{
	MOUSEMSG m;
	initgraph(600, 400);

	livestock* pls[] = { new pig(),new dog(),new hen(),new cattle(),new sheep(),new house() };
	int pos[][2] = { {0,0},{200,0},{400,0},{0,200},{200,200},{400,200} };

	for (int i = 0; i < 6; i++) {
		pls[i]->move(pos[i][0], pos[i][1]);
		pls[i]->draw();
	}

	while (!(GetAsyncKeyState(VK_ESCAPE) & 0x8000))
	{
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)
		{
			for (int i = 0; i < 6; i++) {
				pls[i]->draw();
			}
			for (int i = 0; i < 6; i++) {
				if ((pos[i][0] < m.x && m.x < pos[i][0] + 200) && (pos[i][1] < m.y && m.y < pos[i][1] + 200)) {
					setlinecolor(0x800000);
					rectangle(pos[i][0] + 1, pos[i][1] + 1, pos[i][0] + 198, pos[i][1] + 198);
					pls[i]->shout();
					break;
				}
			}
		}
	}


	for (int i = 0; i < 6; i++) {
		delete pls[i];
	}

	closegraph();
	return 0;
}