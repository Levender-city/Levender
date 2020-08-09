#include "sheep.h"
void sheep::draw()
{
	IMAGE img;
	loadimage(&img, L"deviaEblmykmbrE.jpg", 200, 200, true);
	putimage(m_x, m_y, &img);
}

void sheep::shout()
{
	PlaySound(L"�m��i (�ߤ䤶�� �����) - brave heart (�¸ҵ���).wav", NULL, SND_FILENAME | SND_ASYNC);
}

void sheep::move(int x, int y)
{
	m_x = x;
	m_y = y;
}
