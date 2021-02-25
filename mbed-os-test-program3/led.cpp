#include "mbed.h"

void Led(DigitalOut &ledpin, int n)
{
    for (int i = 0; i < n; ++i)
    {
        ledpin = !ledpin;
	ThisThread::sleep_for(200ms);
        ledpin = !ledpin;
	ThisThread::sleep_for(200ms);
    }
}