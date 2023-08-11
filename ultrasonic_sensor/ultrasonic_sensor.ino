
int trig = 10;
int echo = 11;
float dura;
const float sos = 0.034; 
float distance;
int led = 6;



void setup() {
  // put your setup code here, to run once:
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
Serial.begin(9600);
digitalWrite(trig, HIGH);
delay(10);
digitalWrite(trig, LOW);
delay(10);
pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, HIGH);
  delay(30);
  digitalWrite(trig, LOW);
  delay(2);
  dura = pulseIn(echo, HIGH);
  distance = dura *(sos/2);
  if(distance <= 15){
  analogWrite(led, 500);
  delay(1000);
  analogWrite(led, 0);
  delay(1000);
  
    
    
    }
  Serial.println(distance);
  
  
  

}
