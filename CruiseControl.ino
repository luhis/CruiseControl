#include "DigiKeyboard.h"

void setup() {
}

void loop() {             
    DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_CONTROL_LEFT);
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(100);
    DigiKeyboard.write(".");
    DigiKeyboard.delay(1000);
}
