//purpose of this is to play treble part 2

#include <notes.h>
#include <RedBot.h>

int n[]={
noteC0,
noteCs0,
noteDb0,
noteD0,
noteDs0, 
noteEb0, 
noteE0, 
noteF0, 
noteFs0, 
noteGb0, 
noteG0, 
noteGs0, 
noteAb0, 
noteA0, 
noteAs0, 
noteBb0, 
noteB0, 
noteC1, 
noteCs1, 
noteDb1, 
noteD1, 
noteDs1, 
noteEb1, 
noteE1, 
noteF1, 
noteFs1, 
noteGb1, 
noteG1, 
noteGs1, 
noteAb1, 
noteA1, 
noteAs1, 
noteBb1, 
noteB1, 
noteC2, 
noteCs2, 
noteDb2, 
noteD2, 
noteDs2, 
noteEb2, 
noteE2, 
noteF2, 
noteFs2, 
noteGb2, 
noteG2, 
noteGs2, 
noteAb2, 
noteA2, 
noteAs2, 
noteBb2, 
noteB2, 
noteC3, 
noteCs3, 
noteDb3, 
noteD3, 
noteDs3, 
noteEb3, 
noteE3, 
noteF3, 
noteFs3, 
noteGb3, 
noteG3, 
noteGs3, 
noteAb3, 
noteA3, 
noteAs3, 
noteBb3, 
noteB3, 
noteC4, 
noteCs4, 
noteDb4, 
noteD4, 
noteDs4, 
noteEb4, 
noteE4, 
noteF4, 
noteFs4, 
noteGb4, 
noteG4, 
noteGs4, 
noteAb4, 
noteA4, 
noteAs4, 
noteBb4, 
noteB4, 
noteC5, 
noteCs5, 
noteDb5, 
noteD5, 
noteDs5, 
noteEb5, 
noteE5, 
noteF5, 
noteFs5, 
noteGb5, 
noteG5, 
noteGs5, 
noteAb5, 
noteA5, 
noteAs5, 
noteBb5, 
noteB5, 
noteC6,
noteCs6, 
noteDb6,
noteD6,
noteDs6,
noteEb6,
noteE6,
noteF6,
noteFs6,
noteGb6,
noteG6,
noteGs6,
noteAb6,
noteA6,
noteAs6,
noteBb6,
noteB6,
noteC7,
noteCs7,
noteDb7,
noteD7,
noteDs7,
noteEb7,
noteE7,
noteF7,
noteFs7,
noteGb7,
noteG7,
noteGs7,
noteAb7,
noteA7,
noteAs7,
noteBb7,
noteB7,
noteC8,
noteCs8,
noteDb8,
noteD8,
noteDs8,
noteEb8,
};

const int buzzerPin = 9;//initialize buzzer
const int buttonPin = 12;//initialize button
const int ledpin = 13;//initialize led
const int durations[]={//whole note, half note, quarter note, eighth note,staccato
  1,2,4,8,10
};
const int waitm=1.3;
//const int tempo= 720;
const int tempo= 1500;
const int T[] = {
  tempo/durations[0],tempo/durations[1],tempo/durations[2],tempo/durations[3],tempo/durations[4]
};

int sensorReading=0;
int delayt = 0;
RedBotAccel accelerometer;

void setup() {
  Serial.begin(1000);

}

void loop() {
  accelerometer.read();
sensorReading= abs(accelerometer.angleYZ);
if (abs(sensorReading)>100.00){
  
  for (int i=1;i<=2;i++){
    // intro section
    tone(buzzerPin,261.63,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,261.63,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,261.63,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,293.66,T[3]);
    delay((T[3])*waitm);
  noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);

    tone(buzzerPin,329.63,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,329.63,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,329.63,T[3]);
    delay((T[3])*waitm);
  noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);

    tone(buzzerPin,293.66,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,293.66,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,293.66,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,329.63,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,349.23,T[3]+T[2]);
    delay((T[3]+T[2])*waitm);
 
    tone(buzzerPin,349.23,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    
    tone(buzzerPin,392,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    
    tone(buzzerPin,392,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
  }
  //////////////////////start
  tone(buzzerPin,261.63,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);

  tone(buzzerPin,261.63,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);

  tone(buzzerPin,261.63,T[3]);
    delay(T[3]*waitm);
  tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);

  tone(buzzerPin,329.63,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,329.63,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,329.63,T[3]);
    delay((T[3])*waitm);
  noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);

  tone(buzzerPin,293.66,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,293.66,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,293.66,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,220.00,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);


  ///////Gs
  tone(buzzerPin,392,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,392,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,392,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,392,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);

  tone(buzzerPin,261.63,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);

  tone(buzzerPin,261.63,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);

  tone(buzzerPin,261.63,T[3]);
    delay(T[3]*waitm);
  tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);

  tone(buzzerPin,329.63,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,329.63,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,329.63,T[3]);
    delay((T[3])*waitm);
  noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);

  tone(buzzerPin,293.66,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,293.66,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,293.66,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,220.00,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);


  ///////Gs
  tone(buzzerPin,392,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,392,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    
    tone(buzzerPin,392,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
  
  ///////let go gog o of the pastap tigafjdnM

  //d
  for(int i = 0; i<4; i++)
  {
    tone(buzzerPin,293.66,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
  }

  //e
  for(int i = 0; i<4; i++)
  {
    tone(buzzerPin,329.63,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
  }

  //d
  for(int i = 0; i<4; i++)
  {
    tone(buzzerPin,293.66,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
  }


  tone(buzzerPin,392,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);

  tone(buzzerPin,392,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);

tone(buzzerPin,329.63,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);

  
  tone(buzzerPin,311.13,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
  
    //d
  for(int i = 0; i<4; i++)
  {
    tone(buzzerPin,293.66,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
  }

  //e
  for(int i = 0; i<4; i++)
  {
    tone(buzzerPin,329.63,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
  }

  //f
  for(int i = 0; i<4; i++)
  {
    tone(buzzerPin,349.23,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
  }

  tone(buzzerPin,392,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay((T[2]+T[3])*waitm);

  tone(buzzerPin,392,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
/////////////
tone(buzzerPin,261.63,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);

  tone(buzzerPin,261.63,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);

  tone(buzzerPin,261.63,T[3]);
    delay(T[3]*waitm);
  tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);

  tone(buzzerPin,329.63,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,329.63,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,329.63,T[3]);
    delay((T[3])*waitm);
  noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);

  tone(buzzerPin,293.66,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,293.66,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,293.66,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,220.00,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);


  ///////Gs
  tone(buzzerPin,392,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,392,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,392,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,392,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);

tone(buzzerPin,261.63,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);

  tone(buzzerPin,261.63,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);

  tone(buzzerPin,261.63,T[3]);
    delay(T[3]*waitm);
  tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);

  tone(buzzerPin,329.63,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,329.63,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,329.63,T[3]);
    delay((T[3])*waitm);
  noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,311.13,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);

  tone(buzzerPin,293.66,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,293.66,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,293.66,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,220.00,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);


  ///////Gs
  tone(buzzerPin,392,T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,392,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,392,T[3]);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(delayt);
    tone(buzzerPin,392,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);

 ///CCCCCCCCCC
 for(int i = 0; i<4; i++)
  {
    tone(buzzerPin,261,T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(delayt);
  }

  tone(buzzerPin,392,T[1]);
delay((T[1])*waitm);
tone(buzzerPin,392,T[1]);
delay(T[1]*waitm);
tone(buzzerPin,349.23,T[0]);
delay(T[0]*waitm);

tone(buzzerPin,440,T[0]);
delay(T[0]*waitm);

tone(buzzerPin,261.63,T[1]);
delay(T[1]*waitm);




}}
