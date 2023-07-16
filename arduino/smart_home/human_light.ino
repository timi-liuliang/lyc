void setup() 
{
    pinMode(4, INPUT);
    pinMode(3, OUTPUT);
}

void loop() 
{
    if(digitalRead(4) == 1)
    {
        digitalWrite(3, HIGH);
        delay(10000);
    }
    else
    {
        digitalWrite(3, LOW);
    }
}
