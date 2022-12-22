#define led1 17
#define led2 2
#define led3 15
#define led4 12 

void setup(){
  Serial.begin(9600);
  
  pinMode(led4,OUTPUT);
} 


void loop (){
  
  for(int x=1 ;1<=20 ;x++ ){
    digitalWrite(led4,LOW);
    delay(50);
    digitalWrite(led4,HIGH);
    delay(50);
}
}
