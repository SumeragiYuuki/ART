#include "BUBBLE.h"
BUBBLE::BUBBLE() {
	Radius = random() % 150 + 10.0f;
	float hue = random() % 360;
	Color = COLOR(hue, 128, 255, 128);
	Pos.x = random() % (int)width;
	Pos.y = random() % (int)height;
	Vec.x = random(-5.0f, 5.0f);
	Vec.y = random(-5.0f, 5.0f);
	
}
BUBBLE::~BUBBLE() {

}
void BUBBLE::perform() {
	Pos += Vec;

	if (Pos.x < -Radius) { Pos.x = width + Radius; }
	else if (Pos.x > width + Radius) { Pos.x = -Radius; }
	else if (Pos.y < -Radius) { Pos.y = height + Radius; }
	else if (Pos.y > height + Radius) { Pos.y = -Radius; }

	colorMode(HSV);
	angleMode(DEGREES);
	noStroke();
	fill(Color);
	circle(Pos.x, Pos.y, Radius * 2);
}