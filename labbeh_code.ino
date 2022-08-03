//For Bluetooth Module
char command;
//Declaration of variable
//Motor A
const int Pin1  = 9;   
const int Pin2  = 10; 
const int enaA =8;
//Motor B
const int Pin3  = 4; 
const int Pin4  = 3; 
const int enaB=2;
//Motor C
const int Pin5  = 7; 
const int Pin6  = 6; 
const int enaC =5;
//Motor D
const int Pin7  = 12;  
const int Pin8  = 11;  
const int enaD =13;


void setup() {
      Serial.begin(9600);//Connection to PC
      Serial3.begin(38400);//Connection to Bluetooth
//This will run only one time.
    //Set pins as outputs
    pinMode(Pin1, OUTPUT);
    pinMode(Pin2, OUTPUT);
    pinMode(Pin3, OUTPUT);
    pinMode(Pin4, OUTPUT);
    pinMode(Pin5, OUTPUT);
    pinMode(Pin6, OUTPUT);
    pinMode(Pin7, OUTPUT);
    pinMode(Pin8, OUTPUT);
    
    pinMode(enaA, OUTPUT);
    pinMode(enaB, OUTPUT);
    pinMode(enaC, OUTPUT);
    pinMode(enaD, OUTPUT);
    //Input Output Commands
   //Full Throtle front
  /* //standard Up Left
    analogWrite(enaA, 255);
    analogWrite(enaB, 0);
    analogWrite(enaC, 0);
    analogWrite(enaD, 255);
    
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin4, LOW);
    digitalWrite(Pin5, LOW);
    digitalWrite(Pin6, LOW);
    digitalWrite(Pin7, HIGH);
    digitalWrite(Pin8, LOW);
    delay(10000);
    backward();
   delay(2000);
    //up left-creverse
    analogWrite(enaA, 255);
    analogWrite(enaB, 0);
    analogWrite(enaC, 255);
    analogWrite(enaD, 255);
    
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin4, LOW);
    digitalWrite(Pin5, LOW);
    digitalWrite(Pin6, HIGH);
    digitalWrite(Pin7, HIGH);
    digitalWrite(Pin8, LOW);
    delay(10000);
    backward();
   delay(2000);
    //up-left breverse
    analogWrite(enaA, 255);
    analogWrite(enaB, 255);
    analogWrite(enaC, 0);
    analogWrite(enaD, 255);
    
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin4, HIGH);
    digitalWrite(Pin5, LOW);
    digitalWrite(Pin6, HIGH);
    digitalWrite(Pin7, HIGH);
    digitalWrite(Pin8, LOW);
    delay(10000);
    backward();
    forward();
    delay(2000);
    break2();
   //Full Throtle Back
    backward(); 
    delay(2000);
    break2();
    //Up Right
    up_right();
    delay(2000);
    break2();
    up_left();
    delay(2000);
    break2();
    down_left();
    delay(2000);
    break2();
    down_right();
    delay(2000);
    break2();
    right();
    delay(10000);
    break2();
    left();
    delay(10000);
    break2();*/
}


void loop() {
     if (Serial3.available()>0)
     {command = ((byte)Serial3.read());
      switch(command){
        case 'F':
          forward();
          break;
        case 'B':
          backward();
          break;
        case 'L':
          left();
          break;
        case 'R':
          right();
          break;
        case 'G':
          up_left();
          break;
        case 'I':
          up_right();
          break;
        case 'J':
          down_left();
          break;
        case 'H':
          down_right();
          break;
        default:
          break2();
          break;
      }
    }
}

void forward()
{
    analogWrite(enaA, 255);
    analogWrite(enaB, 255);
    analogWrite(enaC, 255);
    analogWrite(enaD, 255);
    
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin2,LOW);
    digitalWrite(Pin3, HIGH);
    digitalWrite(Pin4,LOW);
    digitalWrite(Pin5, HIGH);
    digitalWrite(Pin6,LOW);
    digitalWrite(Pin7, HIGH);
    digitalWrite(Pin8,LOW);
  
}

void backward()
{   
    analogWrite(enaA,255);
    analogWrite(enaB,255);
    analogWrite(enaC,255);
    analogWrite(enaD,255);
    
    digitalWrite(Pin1,LOW);
    digitalWrite(Pin2,HIGH);
    digitalWrite(Pin3,LOW);
    digitalWrite(Pin4,HIGH);
    digitalWrite(Pin5,LOW);
    digitalWrite(Pin6,HIGH);
    digitalWrite(Pin7,LOW);
    digitalWrite(Pin8,HIGH);
}

void break2()
{
    analogWrite(enaA,0);
    analogWrite(enaB,0);
    analogWrite(enaC,0);
    analogWrite(enaD,0);
    
    digitalWrite(Pin1,LOW);
    digitalWrite(Pin2,LOW);
    digitalWrite(Pin3,LOW);
    digitalWrite(Pin4,LOW);
    digitalWrite(Pin5,LOW);
    digitalWrite(Pin6,LOW);
    digitalWrite(Pin7,LOW);
    digitalWrite(Pin8,LOW);
}

void right()
{
  //360 Clockwise
    analogWrite(enaA, 255);
    analogWrite(enaB, 255);
    analogWrite(enaC, 255);
    analogWrite(enaD, 255);
    
    digitalWrite(Pin2, HIGH);
    digitalWrite(Pin1, LOW);
    digitalWrite(Pin3, HIGH);
    digitalWrite(Pin4,LOW);
    digitalWrite(Pin5, HIGH);
    digitalWrite(Pin6,LOW);
    digitalWrite(Pin8, HIGH);
    digitalWrite(Pin7,LOW);
}

void left()
{
  //360 Counterclockwise
    analogWrite(enaA, 255);
    analogWrite(enaB, 255);
    analogWrite(enaC, 255);
    analogWrite(enaD, 255);
    
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin4, HIGH);
    digitalWrite(Pin3,LOW);
    digitalWrite(Pin6, HIGH);
    digitalWrite(Pin5,LOW);
    digitalWrite(Pin7, HIGH);
    digitalWrite(Pin8,LOW);
}

void down_right()
{   
  //Down Right
    analogWrite(enaA,255);
    analogWrite(enaB,0);
    analogWrite(enaC,255);
    analogWrite(enaD,255);
    
    digitalWrite(Pin1,LOW);
    digitalWrite(Pin2,HIGH);
    digitalWrite(Pin3,LOW);
    digitalWrite(Pin4,LOW);
    digitalWrite(Pin5,HIGH);
    digitalWrite(Pin6,LOW);
    digitalWrite(Pin7,LOW);
    digitalWrite(Pin8,HIGH);
    /*analogWrite(enaA,255);
    analogWrite(enaB,0);
    analogWrite(enaC,255);
    analogWrite(enaD,255);
    
    digitalWrite(Pin1,LOW);
    digitalWrite(Pin2,HIGH);
    digitalWrite(Pin3,LOW);
    digitalWrite(Pin4,LOW);
    digitalWrite(Pin5,LOW);
    digitalWrite(Pin6,HIGH);
    digitalWrite(Pin7,LOW);
    digitalWrite(Pin8,HIGH);*/
}

void down_left()
{
    //Down Left
    analogWrite(enaA,0);
    analogWrite(enaB,255);
    analogWrite(enaC,255);
    analogWrite(enaD,255);
    
    digitalWrite(Pin1,LOW);
    digitalWrite(Pin2,LOW);
    digitalWrite(Pin3,LOW);
    digitalWrite(Pin4,HIGH);
    digitalWrite(Pin5,LOW);
    digitalWrite(Pin6,HIGH);
    digitalWrite(Pin7,HIGH);
    digitalWrite(Pin8,LOW);
    /*analogWrite(enaA,0);
    analogWrite(enaB,255);
    analogWrite(enaC,255);
    analogWrite(enaD,255);
    
    digitalWrite(Pin1,LOW);
    digitalWrite(Pin2,LOW);
    digitalWrite(Pin3,LOW);
    digitalWrite(Pin4,HIGH);
    digitalWrite(Pin5,LOW);
    digitalWrite(Pin6,HIGH);
    digitalWrite(Pin7,LOW);
    digitalWrite(Pin8,HIGH);*/
}

void up_left()
{   
    //UP Left
    analogWrite(enaA, 255);
    analogWrite(enaB, 120);
    analogWrite(enaC, 120);
    analogWrite(enaD, 255);
    
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin3, HIGH);
    digitalWrite(Pin4, LOW);
    digitalWrite(Pin6, LOW);
    digitalWrite(Pin5, HIGH);
    digitalWrite(Pin7, HIGH);
    digitalWrite(Pin8, LOW);
    /*analogWrite(enaA, 255);
    analogWrite(enaB, 0);
    analogWrite(enaC, 255);
    analogWrite(enaD, 255);
    
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin4, LOW);
    digitalWrite(Pin5, HIGH);
    digitalWrite(Pin6, LOW);
    digitalWrite(Pin7, HIGH);
    digitalWrite(Pin8, LOW);*/
}

void up_right()
{
    analogWrite(enaA, 120);
    analogWrite(enaB, 255);
    analogWrite(enaC, 255);
    analogWrite(enaD, 120);
    
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin3, HIGH);
    digitalWrite(Pin4, LOW);
    digitalWrite(Pin5, HIGH);
    digitalWrite(Pin6, LOW);
    digitalWrite(Pin8, HIGH);
    digitalWrite(Pin7, LOW);
    /*analogWrite(enaA, 0);
    analogWrite(enaB, 255);
    analogWrite(enaC, 255);
    analogWrite(enaD, 255);
    
    digitalWrite(Pin1, LOW);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin3, HIGH);
    digitalWrite(Pin4, LOW);
    digitalWrite(Pin5, HIGH);
    digitalWrite(Pin6, LOW);
    digitalWrite(Pin7, HIGH);
    digitalWrite(Pin8, LOW);*/
}
