
int a =2;
int b =8;
int c =5;
int d =6;
int e =7;
int f =3;
int g =4;
int terra1=1;
int terra2=0;

void setup() {
 
  pinMode(terra1,OUTPUT);
  pinMode(terra2,OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}


void loop() {
 for(int dezena=0; dezena<10; dezena++){
  for(int unidade=0; unidade<10;unidade++){
   
    digitalWrite(terra1,LOW);
    digitalWrite(terra2,HIGH);
    if(unidade==0){
    zero();
    }
    if(unidade==1){
    um();
    }
     if(unidade==2){
    dois();
    }
     if(unidade==3){
    tres();
    }
     if(unidade==4){
    4();
    }
     if(unidade==5){
    cinco();
    }
     if(unidade==6){
    seis();
    }
     if(unidade==7){
    sete();
    }
     if(unidade==8){
    oito();
    }
     if(unidade==9){
    nove();
    }
    delay(5);
    digitalWrite(terra1,HIGH);
    digitalWrite(terra2,LOW);
   if(dezena==0){
   zero();
    }
    if(unidade==1){
    um();
    }
     if(unidade==2){
    dois();
    }
     if(unidade==3){
    tres();
    }
     if(unidade==4){
    4();
    }
     if(unidade==5){
    cinco();
    }
     if(unidade==6){
    seis();
    }
     if(unidade==7){
    sete();
    }
     if(unidade==8){
    oito();
    }
     if(unidade==9){
    nove();
   }
    delay(5);

 } 
 }
  
}
void um(){
  digitalWrite(a,LOW ); 
  digitalWrite(b,HIGH); 
  digitalWrite(c,HIGH ); 
  digitalWrite(d,LOW ); 
  digitalWrite(e,LOW ); 
  digitalWrite(f,LOW ); 
  digitalWrite(g,LOW ); 
  }
  void dois(){
  digitalWrite(a,HIGH ); 
  digitalWrite(b,HIGH); 
  digitalWrite(c,LOW ); 
  digitalWrite(d,HIGH  ); 
  digitalWrite(e,HIGH ); 
  digitalWrite(f,LOW ); 
  digitalWrite(g,HIGH ); 
  }
  void tres(){
  digitalWrite(a,HIGH); 
  digitalWrite(b,HIGH ); 
  digitalWrite(c,HIGH ); 
  digitalWrite(d,HIGH); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g,HIGH ); 
  }
  void quatro(){
  digitalWrite(a,LOW ); 
  digitalWrite(b,HIGH ); 
  digitalWrite(c,HIGH); 
  digitalWrite(d,LOW ); 
  digitalWrite(e,LOW ); 
  digitalWrite(f,HIGH); 
  digitalWrite(g,HIGH ); 
  }
  void cinco(){
  digitalWrite(a,HIGH ); 
  digitalWrite(b,LOW ); 
  digitalWrite(c,HIGH ); 
  digitalWrite(d,HIGH ); 
  digitalWrite(e,LOW ); 
  digitalWrite(f,HIGH ); 
  digitalWrite(g,HIGH ); 
  }
  void seis(){
  digitalWrite(a,HIGH ); 
  digitalWrite(b,LOW ); 
  digitalWrite(c,HIGH ); 
  digitalWrite(d,HIGH ); 
  digitalWrite(e,HIGH ); 
  digitalWrite(f,HIGH ); 
  digitalWrite(g,HIGH ); 
  }
  void sete(){
  digitalWrite(a,HIGH ); 
  digitalWrite(b,HIGH ); 
  digitalWrite(c,HIGH ); 
  digitalWrite(d,LOW ); 
  digitalWrite(e,LOW ); 
  digitalWrite(f,HIGH); 
  digitalWrite(g,LOW ); 
  }
  void oito(){
  digitalWrite(a,HIGH ); 
  digitalWrite(b,HIGH ); 
  digitalWrite(c,HIGH ); 
  digitalWrite(d,HIGH ); 
  digitalWrite(e,HIGH ); 
  digitalWrite(f,HIGH ); 
  digitalWrite(g,HIGH ); 
  }
  void nove(){
  digitalWrite(a,HIGH ); 
  digitalWrite(b,HIGH ); 
  digitalWrite(c,HIGH ); 
  digitalWrite(d,HIGH ); 
  digitalWrite(e,LOW ); 
  digitalWrite(f,HIGH ); 
  digitalWrite(g,HIGH ); 
  }
  void zero(){
 digitalWrite(a,HIGH ); 
  digitalWrite(b,HIGH ); 
  digitalWrite(c,HIGH ); 
  digitalWrite(d,HIGH ); 
  digitalWrite(e,HIGH ); 
  digitalWrite(f,HIGH ); 
  digitalWrite(g,LOW ); 
  }





