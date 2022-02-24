#include <Keyboard.h>

void setup() {
     Serial.begin(115200);

    // 아날로그핀 풀업저항 설정.
    pinMode(A0,INPUT_PULLUP);
    pinMode(A1,INPUT_PULLUP);
    pinMode(A2,INPUT_PULLUP);
    pinMode(A3,INPUT_PULLUP);
    pinMode(A4,INPUT_PULLUP);
    pinMode(A5,INPUT_PULLUP);

    // 디지털핀 풀업저항 설정.
    int index;
    for (index=0; index<16; index++)
       pinMode(index, INPUT_PULLUP);

    Keyboard.begin();
}

void loop() {

    // 아날로그 A0핀 설정(z,w,d,f,..)
    if (analogRead(A0)<) Keyboard.press();
    else if(analogRead(A0)<) Keyboard.press();
    else if(analogRead(A0)<) Keyboard.press();
    else if(analogRead(A0)<) Keyboard.press();
    else if(analogRead(A0)<) Keyboard.press();
    else if(analogRead(A0)<) Keyboard.press();
    else if(analogRead(A0)<) Keyboard.press();
    else if(analogRead(A0)<) Keyboard.press();
    else if(analogRead(A0)<) Keyboard.press();
    else if(analogRead(A0)<) Keyboard.press();
    else if(analogRead(A0)<) Keyboard.press();
    else {
        Keyboard.release();
        Keyboard.release();
        Keyboard.release();
        Keyboard.release();
        Keyboard.release();
        Keyboard.release();
        Keyboard.release();
        Keyboard.release();
        Keyboard.release();

    // 디지털 D0핀 설정(alt)
    if(digitalRead(0) == 0) Keyboard.press();
    else Keyboard.release();

    
        
            }   
}
