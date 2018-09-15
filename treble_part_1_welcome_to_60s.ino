//purpose of this program is to play 1 part of the song, "welcome to the 60's" from Hairspray the Musical

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

int M1[]= {//melody 1
  n[85],n[81],n[85],n[81],n[78],n[81],n[85],n[85],n[81],n[92],n[92],n[91],n[85],n[88], n[81]
};
int TM1[]={//time of melody 1
  T[2],T[2],T[2],T[2],T[3],T[3],T[3],T[2],T[2],T[2],T[3],T[2],T[3],(T[2]+T[3]),T[3]
};

int sensorReading=0;
RedBotAccel accelerometer;

void setup() {
  Serial.begin(1000);
  pinMode(ledpin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // configures the button as an INPUT
  // INPUT_PULLUP defaults it to HIGH.
  pinMode(buzzerPin, OUTPUT);  // configures the buzzerPin as an OUTPUT
    
}

void loop() {
  accelerometer.read();
sensorReading= abs(accelerometer.angleYZ);
if (abs(sensorReading)>100.00){

for (int i=1;i<=2;i++){
 //   opening part in song
    delay(T[2]*waitm);
    tone(buzzerPin, n[85],T[2]);
    delay(T[2]*waitm);
    tone(buzzerPin, n[81],T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[85],T[2]);
    delay(T[2]*waitm);
    tone(buzzerPin, n[81],T[2]);
    delay(T[2]*waitm);
    tone(buzzerPin, 392);//
    delay(T[3]*waitm);
    tone(buzzerPin, 440);
    delay(T[3]*waitm);
    tone(buzzerPin, 523.25);
    delay(T[3]*waitm);
    noTone(buzzerPin);
    delay(T[1]*waitm);
    tone(buzzerPin, n[85],T[2]);
    delay(T[2]*waitm);
    tone(buzzerPin, n[81],T[2]);
    delay(T[2]*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[92],T[2]);
    delay(T[2]*waitm);
    tone(buzzerPin, n[92],T[3]);
    delay(T[3]*waitm);
    tone(buzzerPin, n[91],T[2]);
    delay(T[2]*waitm);
    if (i==1){
      tone(buzzerPin, n[85],T[3]);
    delay(T[3]*waitm);
    tone(buzzerPin, n[88],T[2]+T[3]);
    delay((T[2]+T[3])*waitm);
    }
    else{
    tone(buzzerPin, n[85],T[3]);
    delay(T[3]*waitm);
    tone(buzzerPin, n[88],T[2]);
    delay(T[2]*waitm);
    }
}

    
 


//Tracy's part in song
for(int i=1;i<=2;i++){
 
    tone(buzzerPin, n[81],T[2]+T[3]);//hey
    delay((T[2]+T[3])*waitm);

    tone(buzzerPin, n[78],T[3]);//ma-
    delay(T[3]*waitm);
    tone(buzzerPin, n[74],T[3]);//ma
    delay(T[3]*waitm);
    tone(buzzerPin, n[78],T[2]);//hey
    delay(T[2]*waitm);
    tone(buzzerPin, n[78],T[3]);//ma-
    delay(T[3]*waitm);
    tone(buzzerPin, n[74],T[3]);//ma
    delay(T[3]*waitm);
    tone(buzzerPin, n[78],T[3]);//look //// fol
    delay(T[3]*waitm);
    tone(buzzerPin, n[78],T[2]);//a-//////-low
    delay(T[2]*waitm);
    tone(buzzerPin, n[81],(T[3]+T[2]));//round////me!
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[72],T[3]/2);//
    delay((T[3]/2)*waitm);
    tone(buzzerPin, n[74],T[2]);//ev- //// I
    delay(T[3]*waitm+T[3]*waitm/2);
    tone(buzzerPin, n[71],T[3]);//-'ry- //// know
    delay(T[3]*waitm);
    tone(buzzerPin, n[68],T[3]);//-bod- ////- some
    delay(T[3]*waitm);
    tone(buzzerPin, n[64],T[3]);//-y's- //// thing's
    delay(T[3]*waitm);
    tone(buzzerPin, n[68],T[3]);//groov-  ////  in 
    delay(T[3]*waitm);
    tone(buzzerPin, n[61],T[3]);//-in' //// you 
    delay(T[3]*waitm);
    tone(buzzerPin, n[64],T[3]);//to /// that 
    delay(T[3]*waitm);
    tone(buzzerPin, n[61],T[3]);//a ///  you
    delay(T[3]*waitm);
    
    if(i==1){
    tone(buzzerPin, n[68],T[2]);//brand
    delay(T[2]*waitm);
    tone(buzzerPin, n[68],T[2]);//new
    delay(T[2]*waitm);
    tone(buzzerPin, n[64],T[3]);//so
    //delay(T[3]*waitm);
    tone(buzzerPin, n[61],(T[3]+T[2]));//-und
    delay((T[2]+T[3])*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm/4);
    }
}
    tone(buzzerPin, n[68],T[3]);//wan
    delay(T[3]*waitm);
    tone(buzzerPin, n[61],T[3]);//-na
    delay(T[3]*waitm);
    tone(buzzerPin, n[68],T[3]);//set
    delay(T[3]*waitm);
//    for (double j=220.00; j>=196.00; j=j-1.00){
//      
//      tone(buzzerPin,j,T[3]);// freeeee
//    }
    /////////
    tone(buzzerPin,n[64],T[3]);//freee
    delay(T[3]*waitm);
    tone(buzzerPin, n[61],T[3]);//-eeee
    delay(T[3]*waitm);
    //////////
    tone(buzzerPin, n[85],T[3]);//so
    delay(T[3]*waitm);
    tone(buzzerPin, n[85],T[3]);//let
    delay(T[3]*waitm);
    tone(buzzerPin, n[85],T[3]+T[2]);//go
    delay((T[3]+T[2])*waitm);
    tone(buzzerPin, n[81],T[2]);//go
    delay(T[2]*waitm);
    tone(buzzerPin, n[81],T[3]);//go
    delay(T[3]*waitm);
    tone(buzzerPin, n[78],T[3]);//of
    delay(T[3]*waitm);
    tone(buzzerPin, n[74],T[3]);//the
    delay(T[3]*waitm);
    tone(buzzerPin, n[78],T[2]);//past
    delay(T[2]*waitm);
    tone(buzzerPin, n[81],T[3]+T[2]);//now
    delay((T[3]+T[2])*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[85],T[3]);//say
    delay(T[3]*waitm);
    tone(buzzerPin, n[85],T[3]);//hel
    delay(T[3]*waitm);
    tone(buzzerPin, n[85],T[2]);//-lo
    delay((T[2])*waitm);
    tone(buzzerPin, n[81],T[3]);//to
    delay(T[3]*waitm);
    tone(buzzerPin, n[78],T[3]);//the
    delay(T[3]*waitm);
    tone(buzzerPin, n[81],T[2]);//love
    delay(T[2]*waitm);
    tone(buzzerPin, n[78],T[3]);//in
    delay(T[3]*waitm);
    tone(buzzerPin, n[74],T[3]);//your
    delay(T[3]*waitm);
    tone(buzzerPin, n[78],T[2]);//hea-
    delay((T[2])*waitm);
    tone(buzzerPin, n[74],T[2]);//-aa-
    delay(T[2]*waitm);
    tone(buzzerPin, n[71],T[2]);//-art
    delay(T[2]*waitm);
    tone(buzzerPin, n[85],T[3]);//yes,
    delay(T[3]*waitm);
    tone(buzzerPin, n[85],T[3]);//I
    delay(T[3]*waitm);
    tone(buzzerPin, n[85],T[2]);//know
    delay(T[2]*waitm);
    tone(buzzerPin, n[81],T[3]);//that
    delay(T[3]*waitm);
    tone(buzzerPin, n[78],T[3]);//the
    delay(T[3]*waitm);
    tone(buzzerPin, n[81],T[2]);//world's
    delay(T[2]*waitm);
    tone(buzzerPin, n[78],T[3]);//spin
    delay(T[3]*waitm);
    tone(buzzerPin, n[74],T[3]);//-ning
    delay(T[3]*waitm);
    tone(buzzerPin, n[78],T[2]);//fast
    delay(T[2]*waitm);
    tone(buzzerPin, n[81],T[3]+T[2]);//now
    delay((T[3]+T[2])*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[74],T[3]);//You
    delay((T[3])*waitm);
    tone(buzzerPin, n[78],T[3]);//got
    delay((T[3])*waitm);
    tone(buzzerPin, n[81],T[3]);//-ta
    delay((T[3])*waitm);
    tone(buzzerPin, n[83],T[3]);//get
    delay((T[3])*waitm);
    tone(buzzerPin, n[83],T[3]);//Your
    delay((T[3])*waitm);
    tone(buzzerPin, n[81],T[3]);//-self
    delay((T[3])*waitm);
    tone(buzzerPin, n[78],T[3]);//a
    delay((T[3])*waitm);
    tone(buzzerPin, n[81],T[3]);//brand
    delay((T[3])*waitm);
    tone(buzzerPin, n[78],T[2]);//new
    delay((T[2])*waitm);
    tone(buzzerPin, n[78],T[3]);//start.
    delay((T[3])*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);

//

    tone(buzzerPin, n[78],T[3]);//Hey
    delay((T[3])*waitm);    
    tone(buzzerPin, n[81],T[3]);//ma
    delay((T[3])*waitm);
    tone(buzzerPin, n[78],T[3]);//-ma
    delay((T[3])*waitm);
    tone(buzzerPin, n[85],T[3]);//wel
    delay((T[3])*waitm);
    tone(buzzerPin, n[85],T[3]);//-come
    delay((T[3])*waitm);
    tone(buzzerPin, n[81],T[3]);//to
    delay((T[3])*waitm);
    tone(buzzerPin, n[78],T[3]);//the
    delay((T[3])*waitm);
    tone(buzzerPin, n[81],T[2]);//six
    delay((T[2])*waitm);
    tone(buzzerPin, n[85],T[1]);//-ties!
    delay((T[1])*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[81],T[3]);//Oh (1)
    delay((T[3])*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[78],T[3]);//Oh (2)
    delay((T[3])*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[74],T[3]);//Oh (3)
    delay((T[3])*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[71],T[3]);//Oh (4)
    delay((T[3])*waitm);
     noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[71],T[2]);//Oh (5 start)
    delay((T[2])*waitm);
    tone(buzzerPin, n[68],T[3]);//Oh
    delay((T[3])*waitm);
    tone(buzzerPin, n[64],T[3]);//Oh
    delay((T[3])*waitm);
    tone(buzzerPin, n[68],T[2]+T[3]);//Oh
    delay((T[3]+T[2])*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);

//// Next chorus line
    
    tone(buzzerPin, n[85],T[2]+T[3]);//Oh
    delay(T[2]+T[3]);
    for (int k=0; k<3;k++){
      tone(buzzerPin, n[81],T[3]);//ma /// wel // to
      delay(T[3]*waitm);
      tone(buzzerPin, n[78],T[3]);//-ma //-come // the
      delay(T[3]*waitm);
    }
    tone(buzzerPin, n[81],T[2]);//six
    delay(T[2]*waitm);
    tone(buzzerPin, n[85],T[1]);//-ties
    delay(T[1]*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[81],T[3]);//Oh (1)
    delay((T[3])*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[78],T[3]);//Oh (2)
    delay((T[3])*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[74],T[3]);//Oh (3)
    delay((T[3])*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[71],T[3]);//Oh (4)
    delay((T[3])*waitm);
    noTone(buzzerPin);
    delay(T[3]*waitm);
    tone(buzzerPin, n[71],T[2]);//Oh (5 start)
    delay((T[2])*waitm);
    tone(buzzerPin, n[68],T[3]);//Oh
    delay((T[3])*waitm);
    tone(buzzerPin, n[64],T[3]);//Oh
    delay((T[3])*waitm);
    tone(buzzerPin, n[68],T[2]+T[3]);//Oh
    delay((T[3]+T[2])*waitm);
    
    noTone(buzzerPin);
    delay(T[3]*waitm);

tone(buzzerPin,n[102],T[2]+T[3]);
delay((T[2]+T[3])*waitm);
tone(buzzerPin,n[98],T[3]);
delay(T[3]*waitm);
tone(buzzerPin,n[95],T[3]);
delay(T[3]*waitm);
tone(buzzerPin,n[102],T[3]);
delay(T[3]*waitm);
tone(buzzerPin,n[102],T[2]);
delay(T[2]*waitm);
tone(buzzerPin,n[102],T[2]+T[3]);
delay((T[2]+T[3])*waitm);
noTone(buzzerPin);
delay((T[3]+T[1])*waitm);

tone(buzzerPin,n[105],T[3]+T[1]);
delay((T[3]+T[1])*waitm);
tone(buzzerPin,n[105],T[1]);
delay(T[1]*waitm);
tone(buzzerPin,n[102],T[0]);
delay(T[0]*waitm);

tone(buzzerPin,n[109],T[0]);
delay(T[0]*waitm);

tone(buzzerPin,n[108],T[1]);
delay(T[1]*waitm);
noTone(buzzerPin);
    
}}
