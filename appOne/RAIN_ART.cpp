#include "RAIN.h"
#include "RAIN_ART.h"
RAIN_ART::RAIN_ART() {
	Num = 500;
	Rains = new RAIN[Num];
}
RAIN_ART::~RAIN_ART() {
	delete[]Rains;
}
void RAIN_ART::perform() {
	if (isPress(KEY_S)) {
		Num--;
		if (Num < 5) {
			Num = 5;
		}
	}
	clear(30);
	for (int i = 0; i < Num; i++) {
		Rains[i].perform();
	}
}