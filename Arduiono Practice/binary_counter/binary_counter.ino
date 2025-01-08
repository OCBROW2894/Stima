// C++ code
//

int led1=2;
int led2=3;
int led3=4;
int led4=5;
int time1=1000;
int time2=2000;

void setup()
{
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
}

void loop()
{//0
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 delay(time1);
  //1
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,HIGH);
 delay(time1);
 //2
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,LOW);
 delay(time1);
  //3
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,HIGH);
 delay(time1);
  //4
 digitalWrite(led1,LOW);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 delay(time1);
 //5
 digitalWrite(led1,LOW);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,LOW);
 digitalWrite(led4,HIGH);
 delay(time1);
  //6
 digitalWrite(led1,LOW);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,LOW);
 delay(time1);
  //7
 digitalWrite(led1,LOW);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,HIGH);
 delay(time1);
  //8
 digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 delay(time1);
  //9
 digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,HIGH);
 delay(time1);
  //10
 digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,LOW);
 delay(time1);
  //11
 digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,HIGH);
 delay(time1);
  //12
 digitalWrite(led1,HIGH);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 delay(time1);
  //13
 digitalWrite(led1,HIGH);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,LOW);
 digitalWrite(led4,HIGH);
 delay(time1);
  //14
 digitalWrite(led1,HIGH);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,LOW);
 delay(time1);
 //15
 digitalWrite(led1,HIGH);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,HIGH);
 delay(time2);
 

  
}