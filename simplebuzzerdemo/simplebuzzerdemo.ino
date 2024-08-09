const int buzzer = 9; //buzzer to arduino pin 9
int num = 0;
void setup() {
  Serial.begin(115200);  
}


void loop() {

//control with serial
while(Serial.available()>0)
{
num= Serial.parseInt();
Serial.println(num);
tone(buzzer, num, 500);
}

}
