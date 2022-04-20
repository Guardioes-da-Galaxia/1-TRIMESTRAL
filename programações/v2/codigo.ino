const int botao1 = 13;
const int botao2 = 3;
const int led1 =  12;
const int led2 =  2;
int var1 = 0;
int var2 = 0;

void setup() {
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

void loop(){
  
 var1 = digitalRead(botao1);
 var2 = digitalRead(botao2);
  
   if(var1){
   digitalWrite(led1, HIGH);
     delay(250);
   digitalWrite(led1,LOW);
     delay(250);
  }
  
   if(var2){
   digitalWrite(led2, HIGH);
     delay(250);
   digitalWrite(led2,LOW);
     delay(250);
  }
}
