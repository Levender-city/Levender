#pragma once
#include "easyx.h"
#include "mmsystem.h"
#include <Windows.h>
#pragma comment(lib,"winmm.lib")
class livestock
{
public://��Ա����
	virtual void draw()=0;
	virtual void shout()=0;
	virtual void move(int x, int y)=0;
protected:
	int m_x;//���� x
	int m_y;//���� y

};


