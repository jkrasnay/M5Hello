#include <M5Core2.h>
#include <Free_Fonts.h>

void setup() {
    M5.begin();
    M5.Lcd.setFreeFont(FSS18);        // Free Sans 18pt
    M5.Lcd.setTextDatum(MC_DATUM);    // middle-center align
    M5.Lcd.drawString("Hello, world!", 160, 120, GFXFF);
}

void loop() {
}
