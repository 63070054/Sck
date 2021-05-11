#include <Keyboard.h>

int btn2,btn3,btn4,btn5,btn6,btn7,btn8,btn9,btn10,btn11,btn12,btn13;

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
  btn2 = digitalRead(2);
  if(btn2 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_ESC);
    delay(150);
    Keyboard.releaseAll();
  }
  btn3 = digitalRead(3);
  if(btn3 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('n');
    delay(150);
    Keyboard.releaseAll();
  }
  btn4 = digitalRead(4);
  if(btn4 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_DELETE);
    delay(150);
    Keyboard.releaseAll();
  }
  btn5 = digitalRead(5);
  if(btn5 == 0){
    Keyboard.press(KEY_RIGHT_GUI);
    Keyboard.press('l');
    delay(150);
    Keyboard.releaseAll();
  }
  btn6 = digitalRead(6);
  if(btn6 == 0){
    Keyboard.press(KEY_RIGHT_GUI);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('s');
    delay(150);
    Keyboard.releaseAll();
  }
  btn7 = digitalRead(7);
  if(btn7 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('x');
    delay(150);
    Keyboard.releaseAll();
  }
  btn8 = digitalRead(8);
  if(btn8 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('v');
    delay(150);
    Keyboard.releaseAll();
  }
  btn9 = digitalRead(9);
  if(btn9 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('a');
    delay(150);
    Keyboard.releaseAll();
  }
  btn10 = digitalRead(10);
  if(btn10 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('z');
    delay(150);
    Keyboard.releaseAll();
  }
  btn11 = digitalRead(11);
  if(btn11 == 0){
    Keyboard.press(KEY_RIGHT_ALT);
    Keyboard.press(KEY_F4);
    delay(150);
    Keyboard.releaseAll();
  }
  btn12 = digitalRead(12);
  if(btn12 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('y');
    delay(150);
    Keyboard.releaseAll();
  }
  btn13 = digitalRead(13);
  if(btn13 == 0){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('c');
    delay(150);
    Keyboard.releaseAll();
  }
}
