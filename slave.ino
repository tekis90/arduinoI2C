//We add the I2C (Wire) library to the project.
#include <Wire.h>

byte value_ = 0; //Variable to store incoming character

//Relay pin definitions
const int r1=2;
const int r2=3;
const int r3=4;
const int r4=5;
const int r5=6;
const int r6=7;
const int r7=8;
const int r8=9;

void setup() {

  //Pins connected to the relay are set as outputs
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);
  pinMode(r5,OUTPUT);
  pinMode(r6,OUTPUT);
  pinMode(r7,OUTPUT);
  pinMode(r8,OUTPUT);
  
  digitalWrite(r1,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  digitalWrite(r5,LOW);
  digitalWrite(r6,LOW);
  digitalWrite(r7,LOW);
  digitalWrite(r8,LOW);
  
  Wire.begin(1); // Initialized as slave device with address 1
  Wire.onReceive(receiveEvent); // Function to call when data arrives 
  Serial.begin(9600);

  Serial.println("Slave");
}

void loop() {

}

//Relay Control is in progress
void rlyState()
{
  
  if(value_==1)
  {
    digitalWrite(r1,HIGH);
  }
  else if(value_==10)
  {
    digitalWrite(r1,LOW);
  }
  else
  {
    
  }

  if(value_==2)
  {
    digitalWrite(r2,HIGH);
  }
  else if(value_==20)
  {
    digitalWrite(r2,LOW);
  }
  else
  {
    
  }

  if(value_==3)
  {
    digitalWrite(r3,HIGH);
  }
  else if(value_==30)
  {
    digitalWrite(r3,LOW);
  }
  else
  {
    
  }

  if(value_==4)
  {
    digitalWrite(r4,HIGH);
  }
  else if(value_==40)
  {
    digitalWrite(r4,LOW);
  }
  else
  {
    
  }

  if(value_==5)
  {
    digitalWrite(r5,HIGH);
  }
  else if(value_==50)
  {
    digitalWrite(r5,LOW);
  }
  else
  {
    
  }

  if(value_==6)
  {
    digitalWrite(r6,HIGH);
  }
  else if(value_==60)
  {
    digitalWrite(r6,LOW);
  }
  else
  {
    
  }
  if(value_==7)
  {
    digitalWrite(r7,HIGH);
  }
  else if(value_==70)
  {
    digitalWrite(r7,LOW);
  }
  else
  {
    
  }
  if(value_==8)
  {
    digitalWrite(r1,HIGH);
  }
  else if(value_==80)
  {
    digitalWrite(r8,LOW);
  }
  else
  {
    
  }
  
}
void receiveEvent(int byteCount) {
  if (Wire.available() > 0) {
    
    value_ = Wire.read(); // Byte read from I2C line
    
    //Relay Control is in progress
    rlyState();
    Serial.println("Value: " + String(value_));
    
  }
}
