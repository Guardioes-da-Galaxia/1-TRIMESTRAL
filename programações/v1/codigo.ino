const int led1 = 12;
const int led2 = 2;
const int botao1 = 13;
const int botao2 = 3;
int var1 = 1;
int var2 = 1;

void setup()
{
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop(){
  
  if(digitalRead(botao1)==HIGH){
    delay(1);
    if(digitalRead(botao1)==LOW){
      digitalWrite(led1,var1);
      var1= !var1;
    }
  }
  
   if(digitalRead(botao2)==HIGH){
    delay(1);
    if(digitalRead(botao2)==LOW){
      digitalWrite(led2,var2);
      var2= !var2;
    }
  }
}
