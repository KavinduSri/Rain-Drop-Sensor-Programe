#define led 4

const int buz=7;

void setup() {
  Serial.begin(9600);
  pinMode(buz,OUTPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  int sv= analogRead(A0);
  Serial.println(sv);
  if (sv<900){
    Serial.println("Raining...!");
    tone(buz,800);
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
    noTone(buz);
    
  }


}
