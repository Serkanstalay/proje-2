
int motorPin1 = 8; 
int motorPin2 = 9; 
int motorPin3 = 10; 
int motorPin4 = 11;  

int delayTime = 5;
void setup() {
pinMode(motorPin1, OUTPUT); 
pinMode(motorPin2, OUTPUT); 
pinMode(motorPin3, OUTPUT); 
pinMode(motorPin4, OUTPUT); 
Serial.begin(9600);
}
void loop() 
{
  char c = Serial.read();  
   
    if (c == '1')
{
digitalWrite(motorPin1, HIGH); 
digitalWrite(motorPin2, LOW);
digitalWrite(motorPin3, LOW);
digitalWrite(motorPin4, LOW);
delay(delayTime); 
digitalWrite(motorPin1, LOW); 
digitalWrite(motorPin2, HIGH); 
digitalWrite(motorPin3, LOW);
digitalWrite(motorPin4, LOW); 
delay(delayTime); 
digitalWrite(motorPin1, LOW); 
digitalWrite(motorPin2, LOW); 
digitalWrite(motorPin3, HIGH);
digitalWrite(motorPin4, LOW); 
delay(delayTime); 
digitalWrite(motorPin1, LOW);
digitalWrite(motorPin2, LOW); 
digitalWrite(motorPin3, LOW);
digitalWrite(motorPin4, HIGH);
delay(delayTime);
}

else if (c == '3')
{

digitalWrite(motorPin1, LOW);
digitalWrite(motorPin2, LOW);
digitalWrite(motorPin3, LOW);
digitalWrite(motorPin4, HIGH);
delay(delayTime); 
digitalWrite(motorPin1, LOW); 
digitalWrite(motorPin2, LOW); 
digitalWrite(motorPin3, HIGH);
digitalWrite(motorPin4, LOW); 
delay(delayTime); 
digitalWrite(motorPin1, LOW); 
digitalWrite(motorPin2, HIGH); 
digitalWrite(motorPin3, LOW); 
digitalWrite(motorPin4, LOW); 
delay(delayTime);
digitalWrite(motorPin1, HIGH); 
digitalWrite(motorPin2, LOW);
digitalWrite(motorPin3, LOW);
digitalWrite(motorPin4, LOW);
delay(delayTime);
}
else if (c== '2')
{
  delay(delayTime);
}
}
