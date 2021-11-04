int eixo_x1= A0; int eixo_y1 = A1; int eixo_x2= A2; int eixo_y2 = A3; int pot1 = A4; int pot2 = A5;

int posBase = 0;  
int posInf = 90; 
int posSup = 90; 
int posRoll = 90; 
int posPunho = 90;
int posGarra = 0;

int vel1 = 3; int vel2 = 2; int vel3 = 3;  
int vel4 = 3; int vel5 = 3; int vel6 = 3;     
 
#include <Servo.h>       //Puxei a galeria de controle dos servos
    
Servo servoBase;Servo servoInf; Servo servoSup; Servo servoRoll; Servo servoPunho; Servo servoGarra; 
 
void setup(){ 
   
    pinMode (eixo_x1, INPUT);       //Define o pino do eixo_x1 como uma entrada de sinal
    pinMode (eixo_y1, INPUT);       // E assim por diante
    pinMode (eixo_x2, INPUT);
    pinMode (eixo_y2, INPUT);
   
    servoBase.attach(8);  
    servoInf.attach(9); 
    servoSup.attach(10); 
    servoRoll.attach(11); 
    servoPunho.attach(12);  
    servoGarra.attach(13);   
  
    Serial.begin (9600);            //Inicia o monitor serial
   
    Serial.println("Mova os analógicos.");
 
} 
 
void loop(){ 
   
    servoInf.write(posInf);       
    servoSup.write(posSup);        
    servoRoll.write(posRoll); 
    servoPunho.write(posPunho);
    servoGarra.write(posGarra);
    servoBase.write(posBase);        
    
    posBase = analogRead(pot1);
    posBase = map(posBase, 0, 1023, 0, 180);
    
    posGarra = analogRead(pot2);
    posGarra = map(posGarra, 0, 1023, 0, 180);
    
    delay(15);
                                  
                                            

         if (analogRead(eixo_x1)<= 40 and posInf<= 180 )          { 

            posInf = posInf+vel2;

            Serial.print("Sentido: ");
            Serial.println ("J1 - Pra baixo");

            Serial.print("Ângulo: ");
            Serial.println (posInf);

            Serial.println (" ");

          }


         if (analogRead(eixo_x1)>= 1000 and posInf>= 0 ){

            posInf = posInf-vel2;

            Serial.print("Sentido: ");
            Serial.println ("J1 - Pra cima");

            Serial.print("Ângulo: ");
            Serial.println (posInf);
            
            Serial.println (" ");

          }

                   if (analogRead(eixo_x2)<= 40 and posSup<= 180 )          { 

                    posSup = posSup+vel3;

                    Serial.print("Sentido: ");
                    Serial.println ("J1 - Pra baixo");

                    Serial.print("Ângulo: ");
                    Serial.println (posSup);

                    Serial.println (" ");

                  }


                 if (analogRead(eixo_x2)>= 1000 and posSup>= 0 ){

                    posSup = posSup-vel3;

                    Serial.print("Sentido: ");
                    Serial.println ("J1 - Pra cima");

                    Serial.print("Ângulo: ");
                    Serial.println (posSup);
                    
                    Serial.println (" ");

                  }



                           if (analogRead(eixo_y1)<= 40 and posRoll<= 180 )          { 

                            posRoll = posRoll+vel4;

                            Serial.print("Sentido: ");
                            Serial.println ("J1 - Pra baixo");

                            Serial.print("Ângulo: ");
                            Serial.println (posRoll);

                            Serial.println (" ");

                          }


                         if (analogRead(eixo_y1)>= 1000 and posRoll>= 0 ){

                            posRoll = posRoll-vel4;

                            Serial.print("Sentido: ");
                            Serial.println ("J1 - Pra cima");

                            Serial.print("Ângulo: ");
                            Serial.println (posRoll);
                            
                            Serial.println (" ");

                          }

                          

                         if (analogRead(eixo_y2)<= 40 and posPunho<= 180 ) { 

                            posPunho = posPunho+vel4;

                            Serial.print("Sentido: ");
                            Serial.println ("J1 - Pra baixo");

                            Serial.print("Ângulo: ");
                            Serial.println (posRoll);

                            Serial.println (" ");

                          }


                         if (analogRead(eixo_y2)>= 1000 and posPunho>= 0 ){

                            posPunho = posPunho-vel4;

                            Serial.print("Sentido: ");
                            Serial.println ("J1 - Pra cima");

                            Serial.print("Ângulo: ");
                            Serial.println (posPunho);
                            
                            Serial.println (" ");

                          }
                                                 
}
