
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
//  digitalWrite(2, led);
//  led = !led;

  if(HIGH == digitalRead(2)){
    Serial.println("按鈕按下");
    digitalWrite(LED_BUILTIN, HIGH);  
  }else{
    Serial.println("放開");
    digitalWrite(LED_BUILTIN, LOW); 
  }
  delay(100);
   
 }
