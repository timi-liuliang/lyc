#include "DHT.h"

DHT dhtA3(A3, 11);

void setup()
{
    Serial.begin(9600);

    dhtA3.begin();

    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
}

void loop()
{
    if (dhtA3.readTemperature() > 30)
    {
        digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
    }
    else
    {
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);
    }

    Serial.println(String("T:" + String(dhtA3.readTemperature())));
    delay(500);
}



