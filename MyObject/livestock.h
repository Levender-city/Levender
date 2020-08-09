#pragma once
#include "easyx.h"
#include "mmsystem.h"
#include <Windows.h>
#pragma comment(lib,"winmm.lib")
class livestock
{
public://成员方法
	virtual void draw()=0;
	virtual void shout()=0;
	virtual void move(int x, int y)=0;
protected:
	int m_x;//坐标 x
	int m_y;//坐标 y

};


