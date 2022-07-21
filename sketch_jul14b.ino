int pin=9;
int pin1=10;
int pin2=11;
char c;

void setup() {
Serial.begin(9600);
pinMode(pin,OUTPUT);
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);

}

void loop() 
{
  if(Serial.available())
   {
    c=Serial.read();
    if(Serial.read()== 'a')
     {
      digitalWrite(pin,HIGH);
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      }
          if(Serial.read()== 'b')
     {
      digitalWrite(pin,LOW);
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,LOW);
      }
          if(Serial.read()== 'c')
     {
      digitalWrite(pin,LOW);
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,HIGH);
      }
    
    
    } 

}
