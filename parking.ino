const int infrared_Sensor_1 = 12;
const int infrared_Sensor_2 = 11;
const int infrared_Sensor_3 = 10;

const int green_LED_1 = 7;
const int red_LED_1 = 6;
const int green_LED_2 = 5;
const int red_LED_2 = 4;
const int green_LED_3 = 3;
const int red_LED_3 = 2;

int infrared_State_1;
int infrared_State_2;
int infrared_State_3;

void setup() 
{
  pinMode(infrared_Sensor_1, INPUT);
  pinMode(infrared_Sensor_2, INPUT);
  pinMode(infrared_Sensor_3, INPUT);
    
  pinMode(green_LED_1, OUTPUT);
  pinMode(red_LED_1, OUTPUT);  
  pinMode(green_LED_2, OUTPUT);
  pinMode(red_LED_2, OUTPUT);
  pinMode(green_LED_3, OUTPUT);
  pinMode(red_LED_3, OUTPUT);    
}

void loop()
{
  infrared_State_1 = digitalRead(infrared_Sensor_1);
  infrared_State_2 = digitalRead(infrared_Sensor_2);
  infrared_State_3 = digitalRead(infrared_Sensor_3);

  if (infrared_State_1 == HIGH) 
  {
    digitalWrite(green_LED_1, HIGH);
    digitalWrite(red_LED_1, LOW);
  }
  else  
  {
    digitalWrite(green_LED_1, LOW);
    digitalWrite(red_LED_1, HIGH);
  }
  
  if (infrared_State_2 == HIGH) 
  {
    digitalWrite(green_LED_2, HIGH);
    digitalWrite(red_LED_2, LOW);
  }
  else  
  {
    digitalWrite(green_LED_2, LOW);
    digitalWrite(red_LED_2, HIGH);
  }

  if (infrared_State_3 == HIGH) 
  {
    digitalWrite(green_LED_3, HIGH);
    digitalWrite(red_LED_3, LOW);
  }
  else  
  {
    digitalWrite(green_LED_3, LOW);
    digitalWrite(red_LED_3, HIGH);
  }
}
