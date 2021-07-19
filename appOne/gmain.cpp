#include"libOne.h"
#include"BUBBLE_ART.h"
#include"RAIN_ART.h"
#include"SQUARE_ART.h"
void gmain() {
    window(1920, 1080,full);
    hideCursor();
    ART* art = new BUBBLE_ART;
    int i = 0;
    int num = 3;

    while (notQuit) {
        art->perform();
        if (isTrigger(KEY_SPACE)) {
            ++i %= num;
            if      (i == 0) { art = new BUBBLE_ART; }
            else if (i == 1) { art = new RAIN_ART; }
            else if (i == 2) { art = new SQUARE_ART; }
        }
    }
    delete art;
}
