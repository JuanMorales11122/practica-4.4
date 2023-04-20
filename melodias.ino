int pulsador1 = 3;
int pulsador2 = 4;
int estado;
int estado2;
const int pinBuzzer = 2;
const int tonos[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494};
const int countTonos = 10;
void setup()
{
Serial.begin(9600);
pinMode(pulsador1,INPUT);
pinMode(pulsador2,INPUT);
}

void loop()
{
estado = digitalRead(pulsador1);
 estado2 = digitalRead(pulsador2);
  
  if(estado == 1){
  tone(2,669);
delay(600);
  tone(2,439);
delay(400);
  tone(2,563);
delay(350);
  tone(2,739);
delay(250);
  tone(2,369);
delay(400);
  tone(2,539);
delay(600);
  tone(2,584);
delay(400);
  tone(2,439);
delay(400);
  tone(2,390);
delay(400);
  tone(2,648);
delay(400);
noTone(2);
delay(500);
 tone(2,669);
delay(600);
  tone(2,439);
delay(400);
  tone(2,563);
delay(350);
  tone(2,739);
delay(250);
  tone(2,369);
delay(400);
  tone(2,539);
delay(600);
  tone(2,584);
delay(400);
  tone(2,439);
delay(400);
  tone(2,384);
delay(400);
  tone(2,648);
delay(400);
noTone(2);
  
  }

  if(estado2 == 1){
     
  tone(pinBuzzer, 440);
  delay(1000);

  noTone(pinBuzzer);
  delay(500);

  tone(pinBuzzer, 523, 300);
  delay(500);
   for (int iTono = 0; iTono < countTonos; iTono++)
  {
   tone(pinBuzzer, tonos[iTono]);
   delay(500);
  }
  noTone(pinBuzzer);
    }
}