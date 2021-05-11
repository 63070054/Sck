#include <Keyboard.h>

int b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}

void loop() {
  b2 = digitalRead(2);
  if(b2 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_ESC);
    delay(100);
    Keyboard.releaseAll();
  }
  b3 = digitalRead(3);
  if(b3 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('n');
    delay(100);
    Keyboard.releaseAll();
  }
  b4 = digitalRead(4);
  if(b4 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_DELETE);
    delay(100);
    Keyboard.releaseAll();
  }
  b5 = digitalRead(5);
  if(b5 == 0){
    Keyboard.press(KEY_RIGHT_GUI);
    Keyboard.press('l');
    delay(100);
    Keyboard.releaseAll();
  }
  b6 = digitalRead(6);
  if(b6 == 0){
    Keyboard.press(KEY_RIGHT_GUI);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('s');
    delay(100);
    Keyboard.releaseAll();
  }
  b7 = digitalRead(7);
  if(b7 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('x');
    delay(100);
    Keyboard.releaseAll();
  }
  b8 = digitalRead(8);
  if(b8 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('v');
    delay(100);
    Keyboard.releaseAll();
  }
  b9 = digitalRead(9);
  if(b9 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('a');
    delay(100);
    Keyboard.releaseAll();
  }
  b10 = digitalRead(10);
  if(b10 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('z');
    delay(100);
    Keyboard.releaseAll();
  }
  b11 = digitalRead(11);
  if(b11 == 0){
    Keyboard.press(KEY_RIGHT_ALT);
    Keyboard.press(KEY_F4);
    delay(100);
    Keyboard.releaseAll();
  }
  b12 = digitalRead(12);
  if(b12 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('y');
    delay(100);
    Keyboard.releaseAll();
  }
  b13 = digitalRead(13);
  if(b13 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('c');
    delay(100);
    Keyboard.releaseAll();
  }
}
