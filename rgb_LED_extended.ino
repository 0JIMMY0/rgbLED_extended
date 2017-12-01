int LED=13;
int LED2=12;
int LED3=11;
int value=0;
int timer=0;
void setup() {
  // put your setup code here, to run once:
randomSeed(0);
pinMode(LED,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
value = random(0,200);
analogWrite(LED,value);
analogWrite(LED2,value);
analogWrite(LED3,value);
timer = random (0,20);
delay (timer);
}
