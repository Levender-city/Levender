#include "cattle.h"

void cattle::draw()
{
	IMAGE img;
	loadimage(&img, L"HXD (256).jpg", 200, 200, true);
	putimage(m_x, m_y, &img);
}

void cattle::shout()
{
	PlaySound(L"²Ü¸ñ - ±³ÅÑ.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void cattle::move(int x, int y)
{
	m_x = x;
	m_y = y;
}
