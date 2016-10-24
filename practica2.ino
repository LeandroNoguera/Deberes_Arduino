//inicializacion de variables pines 
int led_1=8;
int led_2=9;
int led_3=10;
int led_4=11;
int led_5=12;
int led_6=13;
int sw_1=7;
int sw_2=6;
int pulsador=5;
int vector_leds [6]={led_1,led_2,led_3,led_4,led_5,led_6} ;
/////////////////////////////////
//variables de contadores
int i=0;
int j=0;
/////////////////////////////////

void setup() {
  pinMode(led_1,OUTPUT);//pin 8 como salida
  pinMode(led_2,OUTPUT);//pin 9 como salida
  pinMode(led_3,OUTPUT);//pin 10 como salida
  pinMode(led_4,OUTPUT);//pin 11 como salida
  pinMode(led_5,OUTPUT);//pin 12 como salida
  pinMode(led_6,OUTPUT);//pin 13 como salida
  pinMode(sw_1,INPUT);//pin 6 como entrada
  pinMode(sw_2,INPUT);//pin 7 como entrada
  pinMode(pulsador,INPUT);//pin 5 como entrada

}

void loop() {
  // switch uno primer juego de luces condicion que solo los pares se enciendan en forma secuencial 
  if(digitalRead(sw_1)==HIGH && digitalRead(sw_2)==LOW)
    {
  
      for(;j<5;j++)
        {//for1
        for(i=0;i<=6;i=i+2)
        {//for2
        digitalWrite(vector_leds[i],HIGH);
        delay(200);  
        digitalWrite(vector_leds[i],LOW);
        delay(200);
        }//for2
        i=0;
        }
    }

   else 
   {//codigo en el cual la condicion cambia y solo se ejecutara los numero impares de forma randomica 
    j=0;
    if(digitalRead(sw_1)==LOW && digitalRead(sw_2)==HIGH)
    {
         i=random(6);
         if(i%2==1)
         {
        digitalWrite(vector_leds[i],HIGH);
        delay(200);
        digitalWrite(vector_leds[i],LOW);
        delay(200);
        }    
    }
   }
}
