#include "RAIN.h"
RAIN::RAIN() {
	Color = COLOR(255, 255, 255, 100);
	init();
}
RAIN::~RAIN() {

}
void RAIN::init() {
	Len = random() % 1000 + 100.0f;
	SWeight = random() % 2 + 1.0f;
	SPos.x = random() % (int)width;
	SPos.y = (random() % 1000) * -1.0f;
	Speed = random() % 30 + 5.0f;
	float angle = random() % 5 + 88.0f;
	angleMode(DEGREES);
	Vec.x = cos(angle);
	Vec.y = sin(angle);
	EPos = SPos - Vec * Len;
	Vec *= Speed;
}
void RAIN::perform() {
	SPos += Vec;
	EPos += Vec;
	if (EPos.y > height) { init(); }
	colorMode(RGB);
	strokeWeight(SWeight);
	stroke(Color);
	line(SPos.x, SPos.y, EPos.x, EPos.y);
}