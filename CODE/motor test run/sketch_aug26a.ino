const int LF1  = 11;   //Left front motor pin 1
const int LF2  = 13;   //Left front motor pin 2               
const int LB1  = 15;    //Left back motor pin 1
const int LB2  = 17;    //Left back motor pin 2
const int RF1  = 19;   //Right front motor pin 1
const int RF2  = 21;  //Right front motor pin 2
const int RB1  = 23;  //Right back motor pin 1
const int RB2  = 25;   //Right back motor pin 2

int LFPWM = 3;        //PWM pin for motors
int LBPWM = 5;
int RFPWM = 7;
int RBPWM = 9;

void setup()

{
    
 pinMode(LFPWM, OUTPUT);    
 pinMode(LBPWM, OUTPUT);  
 pinMode(RFPWM, OUTPUT); 
 pinMode(RBPWM, OUTPUT);
 pinMode(LF1, OUTPUT);  
 pinMode(LF2, OUTPUT);  
 pinMode(LB1, OUTPUT);
 pinMode(LB2, OUTPUT);  
 pinMode(RF1, OUTPUT);
 pinMode(RF2, OUTPUT);
 pinMode(RB1, OUTPUT);
 pinMode(RB2, OUTPUT);
   
 Serial.begin(9600);  
 Serial.println("Enter values between 0 - 255");
}
void loop()
{
 
 if(Serial.available())  ;    
 {int speed = Serial.parseInt();    
 Serial.println(speed);      
 analogWrite(LFPWM, speed);           
 analogWrite(LBPWM, speed);        
 analogWrite(RFPWM, speed);    
 analogWrite(RBPWM, speed); 
       
 Forward();
  delay(1000);
 Backward();
  delay(1000);
 Right();
  delay(1000);    
 Left();
   delay(1000);
 Clockwise();
    delay(1000);
CounterClockwise();    
 delay(1000);
 Stop(); }
 delay(1000);
 }



 
void Forward()     {
          //Forward motion
 digitalWrite(LF1,HIGH);
   
 digitalWrite(LF2, LOW);
      
 digitalWrite(LB1,HIGH);
      
 digitalWrite(LB2, LOW);
     
 digitalWrite(RF1,HIGH);
 
 digitalWrite(RF2, LOW);
  
 digitalWrite(RB1,HIGH);
   
 digitalWrite(RB2,LOW); }

  

void Backward() {    
        //Backward motion
 digitalWrite(LF1,LOW);
       
 digitalWrite(LF2, HIGH);
     
 digitalWrite(LB1,LOW);
      
 digitalWrite(LB2, HIGH);
     
 digitalWrite(RF1,LOW);
      
 digitalWrite(RF2, HIGH);
        
 digitalWrite(RB1,LOW);
      
 digitalWrite(RB2,HIGH); }

void Right(){
                //Turn right 
 digitalWrite(LF1,LOW);
     
 digitalWrite(LF2, HIGH);
      
 digitalWrite(LB1,HIGH);
      
 digitalWrite(LB2, LOW);
      
 digitalWrite(RF1,HIGH);
       
 digitalWrite(RF2, LOW);
      
 digitalWrite(RB1,LOW);
       
 digitalWrite(RB2,HIGH); }


void Left(){
                //Turn left
 digitalWrite(LF1,HIGH);
   
 digitalWrite(LF2, LOW);
     
 digitalWrite(LB1,LOW);

 digitalWrite(LB2, HIGH);
        
 digitalWrite(RF1,LOW);
        
 digitalWrite(RF2, HIGH);
        
 digitalWrite(RB1,HIGH);
        
 digitalWrite(RB2,LOW); }

void Clockwise(){
             //Clockwise rotation
 digitalWrite(LF1,HIGH);
   
 digitalWrite(LF2, LOW);
     
 digitalWrite(LB1,HIGH);

 digitalWrite(LB2, LOW);
        
 digitalWrite(RF1,LOW);
        
 digitalWrite(RF2, HIGH);
        
 digitalWrite(RB1,LOW);
        
 digitalWrite(RB2,HIGH);  }

void CounterClockwise(){
    //Counter-Clockwise rotation
 digitalWrite(LF1,LOW);
   
 digitalWrite(LF2,HIGH);
     
 digitalWrite(LB1,LOW);

 digitalWrite(LB2, HIGH);
        
 digitalWrite(RF1,HIGH);
        
 digitalWrite(RF2,LOW);
        
 digitalWrite(RB1,HIGH);
        
 digitalWrite(RB2,LOW);   }


void Stop(){
                //Stop motion
 digitalWrite(LF1,LOW);
        
 digitalWrite(LF1, LOW);
        
 digitalWrite(LB1,LOW);
        
 digitalWrite(LB2, LOW);
        
 digitalWrite(RF1,LOW);
        
 digitalWrite(RF2, LOW);
        
 digitalWrite(RB1,LOW);
        
 digitalWrite(RB2,LOW); 
}
