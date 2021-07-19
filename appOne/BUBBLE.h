#pragma once
#include"libOne.h"
class BUBBLE
{
	float Radius = 0;
	COLOR Color;
	VECTOR2 Pos, Vec;
public:
	BUBBLE();
	~BUBBLE();
	void perform();
};

