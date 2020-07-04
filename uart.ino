#define ledpin 11
String recieved_buffer;
void setup() {
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
    if(Serial.available() > 0){
      recieved_buffer = Serial.readString();  
      
      Serial.print("Recieved data : ");
      Serial.print(recieved_buffer);
  }
  if(recieved_buffer=="ON"){
    digitalWrite(ledpin, HIGH);
    }
  if(recieved_buffer=="OFF"){
    digitalWrite(ledpin, LOW);
    }
}
