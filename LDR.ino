int ldr = A0;
int light;
int led = 9;    
void setup() {
  // put your setup code here, to run once:
  pinMode(ldr, INPUT);
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  light = analogRead(ldr);
  Serial.println(light);
//  analogWrite(led, light);
  if(light < 150 && light < 360)  {
    analogWrite(led, 500);
    }
    
  else if(light > 360){

    analogWrite(led, 0);
    
    
    }


  
  }
