//The used pins
const int pin3 = 3;
const int pin5 = 5;
const int pin6 = 6;
const int pin9 = 9;
const int pin10 = 10;
const int pin11= 11;

//activation delay
const int AD = 100;

int power = 40;
int depower = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin3, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin9, OUTPUT);
  pinMode(pin10, OUTPUT);
  pinMode(pin11, OUTPUT);

}
void loop() {
  analogWrite(pin11, depower);
  analogWrite(pin3, power);
  delay(AD);
  analogWrite(pin3, depower);
  analogWrite(pin5, power);
  delay(AD);
  analogWrite(pin5, depower);
  analogWrite(pin6, power);
  delay(AD);
  analogWrite(pin6, depower);
  analogWrite(pin9, power);
  delay(AD);
  analogWrite(pin9, depower);
  analogWrite(pin10, power);
  delay(AD);
  analogWrite(pin10, depower);
  analogWrite(pin11, power);
  delay(AD);
}
