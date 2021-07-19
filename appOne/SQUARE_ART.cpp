#include "SQUARE.h"
#include "SQUARE_ART.h"
SQUARE_ART::SQUARE_ART() {
	Square = new SQUARE;
	MaxCnt = 222;
	Cnt = 0;
}
SQUARE_ART::~SQUARE_ART() {
	delete Square;
}
void SQUARE_ART::perform() {
	if (Cnt == 0) {
		clear(60, 120, 240);
		Square->init();
	}
	++Cnt %= MaxCnt;
	Square->perform();

}