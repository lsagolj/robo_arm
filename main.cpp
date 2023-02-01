#include "mbed.h"
#include "main.h"

int main()
{
    fist_pwm.period_ms(20);
    shoulder_pwm.period_ms(20);
    elbow_pwm.period_ms(20);

    while(true)
    {
        for(int i = 500; i < 2300; i += 1)
        {
            elbow_pwm.pulsewidth_us(0 + i);
            ThisThread::sleep_for(2);
        }

        for(int i = 0; i < 1800; i += 1)
        {
           elbow_pwm.pulsewidth_us(2300 - i);
           ThisThread::sleep_for(2);
        }
    }
}