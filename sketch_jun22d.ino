const int trig = 2;
const int echo = 3;
const int LED = 9;
unsigned long sure = 0;
int mesafe = 0;

void setup() {
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
pinMode(LED, OUTPUT);
pinMode(LED_BUILTIN,OUTPUT);
digitalWrite(LED,HIGH);
digitalWrite(LED_BUILTIN,LOW);
Serial.begin(9600);
}
void loop() {
digitalWrite(trig,HIGH);
delayMicroseconds(1000);
digitalWrite(trig,LOW);
sure = pulseIn(echo,HIGH);
mesafe = (sure/2) / 29.1;

Serial.print(“Mesafe : “);
Serial.print(mesafe);
Serial.println(” cm”);
Serial.print(“LED Durumu :”);

if(mesafe <= 20)
{
Serial.println(“LED Aktif”);
digitalWrite(LED,HIGH);
delay(2000);
}
else
{
Serial.println(“LED Aktif Değil”);
digitalWrite(LED,LOW);
delay(2000);
}
}
