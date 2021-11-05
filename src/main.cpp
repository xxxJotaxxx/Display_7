#include <Arduino.h>

int pause = 1000; //interval pause

void setup()
{
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}

void display(int a, int b, int c, int d, int e, int f, int g)
{
    digitalWrite(7, a);
    digitalWrite(8, b);
    digitalWrite(9, c);
    digitalWrite(10, d);
    digitalWrite(11, e);
    digitalWrite(12, f);
    digitalWrite(13, g);
}

void loop()
{
    display(1, 1, 1, 1, 1, 1, 0); //write 0
    delay(pause);
    display(0, 1, 1, 0, 0, 0, 0); //write 1
    delay(pause);
    display(1, 1, 0, 1, 1, 0, 1); //write 2
    delay(pause);
    display(1, 1, 1, 1, 0, 0, 1); //write 3
    delay(pause);
    display(0, 1, 1, 0, 0, 1, 1); //write 4
    delay(pause);
    display(1, 0, 1, 1, 0, 1, 1); //write 5
    delay(pause);
    display(1, 0, 1, 1, 1, 1, 1); //write 6
    delay(pause);
    display(1, 1, 1, 0, 0, 0, 0); //write 7
    delay(pause);
    display(1, 1, 1, 1, 1, 1, 1); //write 8
    delay(pause);
    display(1, 1, 1, 0, 0, 1, 1); //write 9
    delay(pause);
}