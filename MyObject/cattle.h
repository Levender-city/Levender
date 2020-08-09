#pragma once
#include "livestock.h"

class cattle :
	public livestock
{
	virtual void draw();
	virtual void shout();
	virtual void move(int x, int y);
};

