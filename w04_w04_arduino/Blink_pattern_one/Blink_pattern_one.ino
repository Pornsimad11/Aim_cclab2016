/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */
int greenled = 13;
int yellowled = 10;
int redled = 7; 

int buttonPin = 2; 
int buttonState = 0; 

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(greenled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(redled, OUTPUT);
  pinMode(buttonPin, INPUT);
}

// the loop function runs over and over again forever
void loop() {

  buttonState = digitalRead(buttonPin); 
  
  if(buttonState == HIGH){
  digitalWrite(greenled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10);              // wait for a second
  
  digitalWrite(greenled, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(20);              // wait for a second



  digitalWrite(yellowled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(130);              // wait for a second
 
  digitalWrite(yellowled, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(140);              // wait for a second
    


  
  digitalWrite(redled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(170);              // wait for a second
  
  digitalWrite(redled, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(180);
  


  digitalWrite(redled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(210);              // wait for a second
  
  digitalWrite(redled, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(220);
  

  digitalWrite(yellowled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);              // wait for a second
 
  digitalWrite(yellowled, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(260);              // wait for a second
    

  digitalWrite(greenled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(290);              // wait for a second
  
  digitalWrite(greenled, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(300);              // wait for a second

  
  digitalWrite(greenled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(330);              // wait for a second
  
  digitalWrite(greenled, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(340);              // wait for a second

   digitalWrite(yellowled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(370);              // wait for a second
 
  digitalWrite(yellowled, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(380);              // wait for a second

  
  digitalWrite(redled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(410);              // wait for a second
  
  digitalWrite(redled, LOW);   // turn the LED on (HIGH is the voltage level)
    

  }
  } 

