

int analogPin1 = 0;  
int analogPin2 = 2;
int analogPin3 = 4;
int value1 = 0;
int value2 = 0;
int value3 = 0;
int value = 0;




void setup()
{
 Serial.begin(9600);
 //int t=34;//threshold value calculate using values on white and black surface

 
 
}



void lineSensor()
{
  int t=100;
  //Serial.print("you you you");
  //digitalWrite(13, HIGH);
  //Serial.println("me me me");
  value1 = analogRead(analogPin1);     // read the input pin of sensor at right
  
  value2 = analogRead(analogPin2);     // read the input pin of sensor at center
  value3 = analogRead(analogPin3);     // read the input pin of sensor at left
  Serial.println(1);
  Serial.println(value1);
  Serial.println(2);
  Serial.println(value2);
  Serial.println(3);
  Serial.println(value3);
  
  if(value1<t && value2<t && value3>t)
  {
    Serial.write("a");//right more
   
    
    
  }
  if(value1<t && value2>t && value3>t)
  {
    Serial.write("b");//right less
    
    
  }
   if(value1<t && value2>t && value3<t)
  {
    Serial.write("s");
    
    
  }
   if(value1>t && value2<t && value3<t)
  {
    Serial.write("c");//leftmore
    
    
  }
   if(value1>t && value2>t && value3<t)
  {
    Serial.write("d");//leftless
    
    
  }
   if(value1>t && value2>t && value3>t)
  {
    Serial.write("z");//node
  
  }
  
  }

void loop()
{
 
      lineSensor();
      

      
  
}
