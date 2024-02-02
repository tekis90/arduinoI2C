//We add the I2C (Wire) library to the project.
#include <Wire.h>

//Sensor pin definitions
const int b1=2;
const int b2=3;
const int b3=4;
const int b4=5;
const int b5=6;
const int b6=7;
const int b7=8;
const int b8=9;

bool b1Value=false;
bool b2Value=false;
bool b3Value=false;
bool b4Value=false;
bool b5Value=false;
bool b6Value=false;
bool b7Value=false;
bool b8Value=false;


void setup() {
  
  Wire.begin();//I2C Communication is started and the device is set as Master
  Serial.begin(9600);// Serial communication started at 9600 speed
  Serial.println("Master");//"Master" text sent to Serial Screen

  //The pins connected to the sensor were set as inputs
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  pinMode(b3,INPUT);
  pinMode(b4,INPUT);
  pinMode(b5,INPUT);
  pinMode(b6,INPUT);
  pinMode(b7,INPUT);
  pinMode(b8,INPUT);

  
}

void transfer(int addres ,byte data_)
{
   Wire.beginTransmission(addres);
   Wire.write(data_); // we send the data
   Wire.endTransmission();

}
// We check the status of each sensor and send the data via I2C.
void bState()
{
  b1Value=digitalRead(b1);
  if(b1Value)
  {
    transfer(1,1);
  }
  else
  {
    transfer(1,10);
  }
  b2Value=digitalRead(b2);
  if(b2Value)
  {
    transfer(1,2);
  }
  else
  {
     transfer(1,20);
  }
  b3Value=digitalRead(b3);
  if(b3Value)
  {
    transfer(1,3);
  }
  else
  {
     transfer(1,30);
  }
  b4Value=digitalRead(b4);
  if(b4Value)
  {
     transfer(1,4);
  }
  else
  {
     transfer(1,40);
  }
  b5Value=digitalRead(b5);
  if(b5Value)
  {
     transfer(1,5);
  }
  else
  {
     transfer(1,50);
  }
  b6Value=digitalRead(b6);
  if(b6Value)
  {
     transfer(1,6);
  }
  else
  {
     transfer(1,60);
  }
  b7Value=digitalRead(b7);
  if(b7Value)
  {
     transfer(1,7);
  }
  else
  {
     transfer(1,70);
  }
  b8Value=digitalRead(b8);
  if(b8Value)
  {
     transfer(1,8);
  }
  else
  {
     transfer(1,80);
  }
  
}


void loop() {


  //Reading the sensor and sending data via I2C
  buttonState();
  delay(50);
  
  
}
