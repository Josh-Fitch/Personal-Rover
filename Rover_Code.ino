

//int motorPin1 = 3;
//int motorPin2 = 4;
int MotorPin1 = 6;
int MotorDir1 = 4;
int EnableA = 5;

void setup() {
  // put your setup code here, to run once:
  //pinMode(EnableB, OUTPUT);
  //pinMode(motorPin2, OUTPUT);
  pinMode(EnableA, OUTPUT);
  pinMode(MotorPin1, OUTPUT);
  pinMode(MotorDir1, OUTPUT);
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorDir1, HIGH);
  Serial.begin(9600);
  while (! Serial);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    analogWrite(EnableA, 255);
    delay(15000);
    //analogWrite(motorPin3, speed);
    //analogWrite(motorPin4, speed);
    /*
    if (instruct = 2)
    {
      speed = 50
      analogWrite(motorPin3, speed);
      analogWrite(motorPin4, speed);
    }
    if (instruct = 3)
    {
      speed = 50
      analogWrite(motorPin1, speed);
      analogWrite(motorPin2, speed);
    }
    */
  }
}
