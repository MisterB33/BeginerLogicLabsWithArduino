//assigning pins to LEDS
const byte LED1 = A0 ;
const byte LED2 = A1 ;
const byte LED3 = A2 ; 
const byte LED4 = A3 ; 

//Assigning Pins for Output to Single Digit LED Display
const byte deCode[] = {13,12,11,10,9,8,7,6}; //start from bottom left Pin 1

//Assigning Pins for Binary input
const byte button1 = 5; 
const byte button2 = 4; 
const byte button3 = 3;
const byte button4 = 2;
const byte upload = A4;
 
//You can use a boolean too, however a boolean will use 2 bytes of data. 
byte state1 = LOW;
byte state2 = LOW; 
byte state3 = LOW; 
byte state4 = LOW; 

void setup() {
  //Setting LED pins for Output
  pinMode(LED1,OUTPUT); 
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);

  //Setting pins connecting to buttons as input
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  pinMode(button4,INPUT);
  pinMode(upload,INPUT);

  //Setting output pins to the LED Display
  pinMode(deCode[0],OUTPUT);
  pinMode(deCode[1],OUTPUT);
  pinMode(deCode[2],OUTPUT);
  pinMode(deCode[3],OUTPUT);
  pinMode(deCode[4],OUTPUT);
  pinMode(deCode[5],OUTPUT);
  pinMode(deCode[6],OUTPUT);
  pinMode(deCode[7],OUTPUT);
}

void loop() {
  updateState();
  if (digitalRead(upload)){
    checkState();
    UpdateLEDScreen(state1,state2,state3,state4,deCode);
  }
}

//Updating values of the LEDS to Vissually illustrate Binary Value
void updateState(){
  digitalWrite(LED1,state1); 
  digitalWrite(LED2,state2);
  digitalWrite(LED3,state3);
  digitalWrite(LED4,state4);
}
//Boolean Logic expression for one number this example will illustrate 
//may update code to have a permanant myLED array, too lazy.... 
void UpdateLEDScreen(byte A, byte B, byte C, byte D, byte temp[]){
   byte myLED[]= {
    (!A*!B*!C*!D)||(!A*B*!C*!D)||(!A*B*C*!D)||(!A*!B*!C*D),
    (!A*!B*!C*!D)||(!A*B*!C*!D)||(A*B*!C*!D)||(A*!B*C*!D)||(!A*B*C*!D)||(!A*!B*!C*D)||(A*!B*!C*D),
    (!A*!B*!C*!D)||(A*!B*!C*!D)||(A*B*!C*!D)||(!A*!B*C*!D)||(A*!B*C*!D)||(!A*B*C*!D)||(A*B*C*!D)||(!A*!B*!C*D)||(A*!B*!C*D),
    (!A*!B*!C*!D)||(A*!B*!C*!D)||(!A*B*!C*!D)||(A*B*!C*!D)||(!A*!B*C*!D)||(A*B*C*!D)||(!A*!B*!C*D)||(A*!B*!C*D),
    (!A*!B*!C*!D)||(!A*B*!C*!D)||(A*B*!C*!D)||(A*!B*C*!D)||(!A*B*C*!D)||(A*B*C*!D)||(!A*!B*!C*D)||(A*!B*!C*D),
    (!A*!B*!C*!D)||(!A*!B*C*!D)||(A*!B*C*!D)||(!A*B*C*!D)||(!A*!B*!C*D)||(A*!B*!C*D),
    (!A*B*!C*!D)||(A*B*!C*!D)||(!A*!B*C*!D)||(A*!B*C*!D)||(!A*B*C*!D)||(!A*!B*!C*D)||(A*!B*!C*D),
    0 // This is the Decimal pin and doesnt matter if it is on of off, for me I just turned it off.  
   };
   for(int i = 0 ; i < 8 ; i++){
    digitalWrite(temp[i],myLED[i]);
   }
};

void checkState(){
  state1 = digitalRead(button1);
  state2 = digitalRead(button2);
  state3 = digitalRead(button3);
  state4 = digitalRead(button4);  
}
