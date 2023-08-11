
int red = 9;
int green = 6;
int yellow = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(red, 500);
  delay(1000);
  analogWrite(red, 0);
  delay(100);
  analogWrite(yellow, 500);
  delay(1000);
  analogWrite(yellow, 0);
  delay(100); 
  analogWrite(green, 500);
  delay(1000);
  analogWrite(green, 0);
  delay(100); 

  

}
