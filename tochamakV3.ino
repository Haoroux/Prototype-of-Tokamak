//The used pins
const int pin3 = 3;
const int pin5 = 5;
const int pin6 = 6;
const int pin9 = 9;
const int pin10 = 10;
const int pin11= 11;

int pins[] = {
  3,5,6,9,10,11
  };
  
//activation delay
int AD = 100;

int power = 40;
int depower = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pins[3], OUTPUT);
  pinMode(pins[5], OUTPUT);
  pinMode(pins[6], OUTPUT);
  pinMode(pins[9], OUTPUT);
  pinMode(pins[10], OUTPUT);
  pinMode(pins[11], OUTPUT);
  Serial.begin(9600);
}
//0,3258455522971652
void loop() {
  int sensorValue = analogRead(A2);
  AD = map(sensorValue,0,1024,0,166.67);
  Serial.println(sensorValue);
  Serial.println("Arduino");
  for(int i=0; i<6; i++){
    int x = pins[i-1];
    if (i==0){
      x = 11;
      }
    analogWrite(x, depower);
    analogWrite(pins[i], power);
    delay(AD);
  }
}
