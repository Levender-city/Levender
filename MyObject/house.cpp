#include "house.h"
void house::draw()
{
	IMAGE img;
	loadimage(&img, L"HXD (42).jpg", 200, 200, true);
	putimage(m_x, m_y, &img);
}

void house::shout()
{
	PlaySound(L"杨培安 - 我相信.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void house::move(int x, int y)
{
	m_x = x;
	m_y = y;
}
