#include "SQUARE.h"

SQUARE::SQUARE() {
	Color = COLOR(255, 255, 255, 8);
	Pos.x = 0;
	Pos.y = 0;
	Vec.x = 8;
	Vec.y = Vec.x / 16 * 9;
	AngSpeed = 0.05f;
}
SQUARE::~SQUARE() {

}
void SQUARE::init() {
	Len = 0;
	Pos.x = 0;
	Pos.y = 0;
	Angle = 0;
}
void SQUARE::perform() {
	Pos += Vec;
	Angle += AngSpeed;
	Len += Vec.x;
	strokeWeight(1);
	stroke(0);
	fill(Color);
	angleMode(RADIANS);
	rect(Pos.x, Pos.y, Len, Len,Angle);
}