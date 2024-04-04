int led_verde = 12;
int led_ama = 8;
int led_verm = 4;
int bz = 2;

void setup()
{
    pinMode(led_verde, OUTPUT);
    pinMode(led_ama, OUTPUT);
    pinMode(led_verm, OUTPUT);
    pinMode(bz, OUTPUT);
    Serial.begin(9600);
    }

    void loop()
    {
    int ldr = analogRead(A0);
    Serial.println(ldr);
    
    if(ldr < 300){
        digitalWrite(led_verm, LOW);
        digitalWrite(led_ama, LOW);
        digitalWrite(led_verde, HIGH);
    }
    else if(ldr < 600){
        digitalWrite(led_verde, LOW);
        digitalWrite(led_verm, LOW);
        digitalWrite(led_ama, HIGH);
        tone(bz, 261);
        delay(3000);
        noTone(bz);
    }else{
        digitalWrite(led_verde, LOW);
        digitalWrite(led_ama, LOW);
        digitalWrite(led_verm, HIGH);
    }
    delay(500);
}