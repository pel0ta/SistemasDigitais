
int pushButton1 = 2 ;
int pushButton2 = 4 ;
int pushButton3 = 7 ;
int led1=10 ;
int led2=11 ;


void setup() {
  
  pinMode(pushButton1, INPUT);
  pinMode(pushButton2, INPUT);
  pinMode(pushButton3, INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  
}


void loop() {
  
  
  int pres = digitalRead(pushButton1);
  int func1 = digitalRead(pushButton2);
  int func2 = digitalRead(pushButton3);
  
  if(pres==HIGH && (func1==HIGH || func2==HIGH))
  {
  digitalWrite(led1, HIGH);  
  digitalWrite(led2, LOW);
  }else
  {
   digitalWrite(led1, LOW);
   digitalWrite(led2, HIGH);
  }
  
}        



