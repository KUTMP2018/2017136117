int latchPin = 12;      //Pin connected to ST_CP of 74HC595
int clockPin = 11;   //Pin connected to SH_CP of 74HC595
int dataPin = 13;  //Pin connected to DS of 74HC595

int redPin=10;
int greenPin=8;
int bluePin=9;

int redPin_2=7;
int greenPin_2=6;
int bluePin_2=5;

int redPin_3=4;
int greenPin_3=3;
int bluePin_3=2;

const int sw1=24; 
const int sw2=26;
const int sw3=28;



byte data;
 
void setup() {
  
   Serial.begin(9600);
  pinMode(sw1, INPUT);   
  pinMode(sw2, INPUT);
  pinMode(sw3, INPUT);
     
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(redPin_2, OUTPUT);
  pinMode(greenPin_2, OUTPUT);
  pinMode(bluePin_2, OUTPUT);

  pinMode(redPin_3, OUTPUT);
  pinMode(greenPin_3, OUTPUT);
  pinMode(bluePin_3, OUTPUT);
   
}
 
void loop(){
  int button1state;
  int button2state;
  int button3state;
  
  button1state=digitalRead(sw1);
  button2state=digitalRead(sw2);
  button3state=digitalRead(sw3);
   
  if( button1state==LOW){
    shiftOut(dataPin, clockPin, LSBFIRST, B00000000);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    
 analogWrite(10,255); //red
   analogWrite(7,255);
   analogWrite(4,255);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(1000);
    
    analogWrite(10,237); //orange
   analogWrite(7,237);
   analogWrite(4,237);
   analogWrite(8, 76);//
   analogWrite(6, 76);
   analogWrite(3, 76);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(1000);

    analogWrite(10,225); //yellow
   analogWrite(7,225);
   analogWrite(4,225);
   analogWrite(8, 225);//
   analogWrite(6, 225);
   analogWrite(3, 225);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(1000);

     analogWrite(10,0); //green
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 225);//
   analogWrite(6, 225);
   analogWrite(3, 225);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(1000);

     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 84);//
   analogWrite(6, 84);
   analogWrite(3, 84);
   analogWrite(9,225);//
   analogWrite(5, 225);
   analogWrite(2, 225);
    delay(1000);

      analogWrite(10,0); //navy
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,75);//
   analogWrite(5, 75);
   analogWrite(2, 75);
    delay(1000);

   analogWrite(10,80); //purple
   analogWrite(7,80);
   analogWrite(4,80);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,80);//
   analogWrite(5, 80);
   analogWrite(2, 80);
    delay(1000);
    

  
  analogWrite(10,255); //red
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //red
   analogWrite(7,225);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //red
   analogWrite(7,0);
   analogWrite(4,225);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    
    analogWrite(10,237); //orange
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 76);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //orange
   analogWrite(7,237);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 76);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //orange
   analogWrite(7,0);
   analogWrite(4,237);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 76);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    
    analogWrite(10,225); //yellow
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 225);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //yellow
   analogWrite(7,225);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 225);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //yellow
   analogWrite(7,0);
   analogWrite(4,225);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 225);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);

     analogWrite(10,0); //green
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 225);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //green
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 225);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //green
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 225);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);

     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 84);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,225);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 84);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 225);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 84);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 225);
    delay(200);

   
    analogWrite(10,80); //purple
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,80);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //purple
   analogWrite(7,80);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 80);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //purple
   analogWrite(7,0);
   analogWrite(4,80);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 80);
    delay(200); 
    
   analogWrite(9,225);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 84);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 225);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 84);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 225);
    delay(200);

   
    analogWrite(10,80); //purple
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,80);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //purple
   analogWrite(7,80);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 80);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //purple
   analogWrite(7,0);
   analogWrite(4,80);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 80);
    delay(200); 
  analogWrite(10,255); //red
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //red
   analogWrite(7,225);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //red
   analogWrite(7,0);
   analogWrite(4,225);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    
    analogWrite(10,237); //orange
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 76);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //orange
   analogWrite(7,237);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 76);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //orange
   analogWrite(7,0);
   analogWrite(4,237);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 76);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    
    analogWrite(10,225); //yellow
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 225);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //yellow
   analogWrite(7,225);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 225);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //yellow
   analogWrite(7,0);
   analogWrite(4,225);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 225);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);

     analogWrite(10,0); //green
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 225);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //green
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 225);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //green
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 225);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);

     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 84);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,225);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 84);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 225);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 84);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 225);
    delay(200);

   
    analogWrite(10,80); //purple
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,80);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //purple
   analogWrite(7,80);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 80);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //purple
   analogWrite(7,0);
   analogWrite(4,80);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 80);
    delay(200); 
    
   analogWrite(9,225);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 84);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 225);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 84);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 225);
    delay(200);

   
    analogWrite(10,80); //purple
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,80);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //purple
   analogWrite(7,80);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 80);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //purple
   analogWrite(7,0);
   analogWrite(4,80);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 80);
    delay(200); 
     analogWrite(10,255); //red
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //red
   analogWrite(7,225);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //red
   analogWrite(7,0);
   analogWrite(4,225);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    
    analogWrite(10,237); //orange
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 76);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //orange
   analogWrite(7,237);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 76);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //orange
   analogWrite(7,0);
   analogWrite(4,237);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 76);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    
    analogWrite(10,225); //yellow
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 225);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //yellow
   analogWrite(7,225);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 225);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //yellow
   analogWrite(7,0);
   analogWrite(4,225);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 225);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);

     analogWrite(10,0); //green
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 225);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //green
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 225);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //green
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 225);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);

     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 84);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,225);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 84);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 225);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 84);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 225);
    delay(200);

   
    analogWrite(10,80); //purple
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,80);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //purple
   analogWrite(7,80);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 80);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //purple
   analogWrite(7,0);
   analogWrite(4,80);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 80);
    delay(200); 
    
   analogWrite(9,225);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 84);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 225);
   analogWrite(2, 0);
    delay(200);
     analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 84);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 225);
    delay(200);

   
    analogWrite(10,80); //purple
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,80);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //purple
   analogWrite(7,80);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 80);
   analogWrite(2, 0);
    delay(200);
    analogWrite(10,0); //purple
   analogWrite(7,0);
   analogWrite(4,80);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 80);
    delay(200);   
 
    analogWrite(10,225); // 빨
   analogWrite(7,237);
   analogWrite(4,255);
   analogWrite(8, 0);//주
   analogWrite(6, 76);
   analogWrite(3, 228);
   analogWrite(9,0);//노
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(500);
    analogWrite(10,29); // 초
   analogWrite(7,0);
   analogWrite(4,1);
   analogWrite(8, 219);//하
   analogWrite(6, 216);
   analogWrite(3, 0);
   analogWrite(9,225);//파
   analogWrite(5, 0);
   analogWrite(2, 225);
    delay(500);
    analogWrite(10,3); // 남
   analogWrite(7,255);
   analogWrite(4,225);
   analogWrite(8, 0);//보
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,102);//빨
   analogWrite(5, 221);
   analogWrite(2, 0);
 delay(500); 
 analogWrite(10,225); // 빨
   analogWrite(7,237);
   analogWrite(4,255);
   analogWrite(8, 0);//주
   analogWrite(6, 76);
   analogWrite(3, 228);
   analogWrite(9,0);//노
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(500);
    analogWrite(10,29); // 초
   analogWrite(7,0);
   analogWrite(4,1);
   analogWrite(8, 219);//하
   analogWrite(6, 216);
   analogWrite(3, 0);
   analogWrite(9,225);//파
   analogWrite(5, 0);
   analogWrite(2, 225);
    delay(500);
    analogWrite(10,3); // 남
   analogWrite(7,255);
   analogWrite(4,225);
   analogWrite(8, 0);//보
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,102);//빨
   analogWrite(5, 221);
   analogWrite(2, 0);
 delay(500); 
     analogWrite(10,225); // 빨
   analogWrite(7,237);
   analogWrite(4,255);
   analogWrite(8, 0);//주
   analogWrite(6, 76);
   analogWrite(3, 228);
   analogWrite(9,0);//노
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(500);
    analogWrite(10,29); // 초
   analogWrite(7,0);
   analogWrite(4,1);
   analogWrite(8, 219);//하
   analogWrite(6, 216);
   analogWrite(3, 0);
   analogWrite(9,225);//파
   analogWrite(5, 0);
   analogWrite(2, 225);
    delay(500);
    analogWrite(10,3); // 남
   analogWrite(7,255);
   analogWrite(4,225);
   analogWrite(8, 0);//보
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,102);//빨
   analogWrite(5, 221);
   analogWrite(2, 0);
 delay(500); 
 
     analogWrite(10,0); //
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(1000);
  }
  else{
    shiftOut(dataPin, clockPin, LSBFIRST, B000000);
      
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(2000);
         analogWrite(10,0); //
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(1000);
  }
  if(button2state==LOW){
    shiftOut(dataPin, clockPin, LSBFIRST, B11111111);
      
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(2000);
    
       shiftOut(dataPin, clockPin, LSBFIRST, B00000000);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
       shiftOut(dataPin, clockPin, LSBFIRST, B10000001);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
    shiftOut(dataPin, clockPin, LSBFIRST, B11000011);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
    shiftOut(dataPin, clockPin, LSBFIRST, B11100111);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
    shiftOut(dataPin, clockPin, LSBFIRST, B11111111);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
        shiftOut(dataPin, clockPin, LSBFIRST, B11100111);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
       shiftOut(dataPin, clockPin, LSBFIRST, B11000011);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
    shiftOut(dataPin, clockPin, LSBFIRST, B10000001);
       digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
    shiftOut(dataPin, clockPin, LSBFIRST, B00000000);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);

    
       shiftOut(dataPin, clockPin, LSBFIRST, B10000001);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
    shiftOut(dataPin, clockPin, LSBFIRST, B11000011);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
    shiftOut(dataPin, clockPin, LSBFIRST, B11100111);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
    shiftOut(dataPin, clockPin, LSBFIRST, B11111111);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
        shiftOut(dataPin, clockPin, LSBFIRST, B11100111);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
       shiftOut(dataPin, clockPin, LSBFIRST, B11000011);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
    shiftOut(dataPin, clockPin, LSBFIRST, B10000001);
       digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
    shiftOut(dataPin, clockPin, LSBFIRST, B00000000);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(300);
    
     shiftOut(dataPin, clockPin, LSBFIRST, B11111111); 
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(2000);
    for(int i=0; i<8; i++)
 {
 digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, 1<<i);
   digitalWrite(latchPin, HIGH);
   delay(100);
  }
  for(int i=0; i<8; i++)
 {
 digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 1<<i);
   digitalWrite(latchPin, HIGH);
   delay(100);
  }
 for(int i=0; i<8; i++)
 {
 digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, 1<<i);
   digitalWrite(latchPin, HIGH);
   delay(100);
  }
   for(int i=0; i<8; i++)
 {
 digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 1<<i);
   digitalWrite(latchPin, HIGH);
   delay(100);
  }
  for(int i=0; i<8; i++)
 {
 digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, 1<<i);
   digitalWrite(latchPin, HIGH);
   delay(100);
  }
  for(int i=0; i<8; i++)
 {
 digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 1<<i);
   digitalWrite(latchPin, HIGH);
   delay(100);
  } 
  }
  
 else{
    shiftOut(dataPin, clockPin, LSBFIRST, B000000);
      
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(2000);
         analogWrite(10,0); //
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(1000);}

 
if (button3state==LOW){
analogWrite(10,0); //red
   analogWrite(7,225);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11000000);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
    analogWrite(10,0); //green
   analogWrite(7,29);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 219);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 22);
   analogWrite(2, 0);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11110000);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
    analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,1);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 255);
   analogWrite(2, 0);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11111100);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
    analogWrite(10,0); //red
   analogWrite(7,0);
   analogWrite(4,255);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 127);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11111111);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
    analogWrite(10,0); //red
   analogWrite(7,225);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11000000);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
    analogWrite(10,0); //green
   analogWrite(7,29);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 219);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 22);
   analogWrite(2, 0);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11110000);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
    analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,1);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 255);
   analogWrite(2, 0);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11111100);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
    analogWrite(10,0); //red
   analogWrite(7,0);
   analogWrite(4,255);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 127);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11111111);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
    analogWrite(10,0); //red
   analogWrite(7,225);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11000000);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
    analogWrite(10,0); //green
   analogWrite(7,29);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 219);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 22);
   analogWrite(2, 0);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11110000);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
    analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,1);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 255);
   analogWrite(2, 0);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11111100);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
    analogWrite(10,0); //red
   analogWrite(7,0);
   analogWrite(4,255);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 127);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11111111);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
         shiftOut(dataPin, clockPin, LSBFIRST, B11000000);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
    analogWrite(10,0); //green
   analogWrite(7,29);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 219);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 22);
   analogWrite(2, 0);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11110000);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
    analogWrite(10,0); //blue
   analogWrite(7,0);
   analogWrite(4,1);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 255);
   analogWrite(2, 0);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11111100);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
    analogWrite(10,0); //red
   analogWrite(7,0);
   analogWrite(4,255);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 127);
    delay(200);
     shiftOut(dataPin, clockPin, LSBFIRST, B11111111);
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(200);
}
else{
    shiftOut(dataPin, clockPin, LSBFIRST, B000000);
      
    digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
    digitalWrite(latchPin, LOW);
    delay(2000);
         analogWrite(10,0); //
   analogWrite(7,0);
   analogWrite(4,0);
   analogWrite(8, 0);//
   analogWrite(6, 0);
   analogWrite(3, 0);
   analogWrite(9,0);//
   analogWrite(5, 0);
   analogWrite(2, 0);
    delay(1000);}

}

  
