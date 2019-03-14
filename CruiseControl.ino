#include "DigiKeyboard.h"

void setup() {
}

void loop() {             
    DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(200);
    int downs = random(5);
    for (int i = 0; i < downs; i++)
    {
      DigiKeyboard.sendKeyStroke(81);
      DigiKeyboard.delay(50);
    }
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(50);
    DigiKeyboard.write(".");
    DigiKeyboard.delay(50);
}
