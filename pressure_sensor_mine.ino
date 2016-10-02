int fsrPin = A0;
int ledPin = 4;

void setup() {
  // put your setup code here, to run once:
pinMode(fsrPin, INPUT);
pinMode(ledPin, OUTPUT); 
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int fsrVal = analogRead(fsrPin);

Serial.println(fsrVal);
 
if(fsrVal > 300) {
  digitalWrite(ledPin, HIGH); 
} else {
  digitalWrite(ledPin, LOW);
} 
}
