#define LED 15

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH); //HIGH is set to about 5V PIN8
  delay(1000);               //Set the delay time, 1000 = 1S
  digitalWrite(LED,LOW);  //LOW is set to about 5V PIN8
  delay(1000);               //Set the delay time, 1000 = 1S
}
