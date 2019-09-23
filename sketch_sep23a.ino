
void setup() {
  // put your setup code here, to run once:
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
}

void loop() {
//  digitalWrite(2, led);
//  led = !led;
  
  digitalWrite(15, LOW);
  digitalWrite(16, HIGH);
  digitalWrite(17, HIGH);
  delay(1000);
  
  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
  digitalWrite(17, HIGH);
  delay(1000);

  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
  digitalWrite(17, LOW);
  delay(1000);
   
 }
