#include "sheep.h"
void sheep::draw()
{
	IMAGE img;
	loadimage(&img, L"deviaEblmykmbrE.jpg", 200, 200, true);
	putimage(m_x, m_y, &img);
}

void sheep::shout()
{
	PlaySound(L"ŒmÆéši (¤ß¤ä¤¶¤­ ¤¢¤æ¤ß) - brave heart (ÓÂ¸ÒµÄÐÄ).wav", NULL, SND_FILENAME | SND_ASYNC);
}

void sheep::move(int x, int y)
{
	m_x = x;
	m_y = y;
}
