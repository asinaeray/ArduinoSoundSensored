
const int sensor=0;
const int ledpin=13;
int deger;
const int son=30;

void setup() {
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  deger=analogRead(sensor);
  Serial.println(deger);
  if(deger > son){
    digitalWrite(ledpin,1);
    delay(500);
    digitalWrite(ledpin,0);
  }
  else{
    digitalWrite(ledpin,0);
  }
}
