int IN1 = 3;
int IN2 = 5;
int EN = 6;
int BOT1 = 9;
int BOT2 = 10;
int BOT3 = 8;
int LED1 = 13;
int LED2 = 12;
void setup()
{
	pinMode(IN1, OUTPUT);
	pinMode(IN2, OUTPUT);
	pinMode(BOT1, INPUT_PULLUP);
	pinMode(BOT2, INPUT_PULLUP);
	pinMode(BOT3, INPUT_PULLUP);
	pinMode(LED1, OUTPUT);
	pinMode(LED2, OUTPUT);
}

void loop()
{
  
  if(digitalRead(BOT1) == LOW){
	digitalWrite(IN1, HIGH);
	digitalWrite(IN2, LOW);
analogWrite(EN, 255);
  }else if(digitalRead(BOT2) == LOW){
	digitalWrite(IN1, LOW);
	digitalWrite(IN2, HIGH);
	analogWrite(EN, 70);
  }else if(digitalRead(BOT3) == LOW){
	digitalWrite(IN1, LOW);
	digitalWrite(IN2, LOW);
  }
  
  //-------------------------------------------------------//
  
  if(digitalRead(IN1) == HIGH && digitalRead(IN2) == LOW){
	digitalWrite(LED1, HIGH);
	digitalWrite(LED2, LOW);
  }else if(digitalRead(IN2) == HIGH && digitalRead(IN1) == LOW){
	digitalWrite(LED2, HIGH);
	digitalWrite(LED1, LOW);
  }else if(digitalRead(BOT3) == LOW)
	digitalWrite(LED1, LOW);
	digitalWrite(LED2, LOW);
  }
  
  
  
