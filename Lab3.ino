
int pd=2; //Photodiode to digital pin 2
int LedG=13; //Green Led to digital pin 13
int senRead=3; //Readings from sensor to pin 3

volatile byte rpmcount=0; 

unsigned int rpm=0;

unsigned long timeold=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pd,OUTPUT);
  pinMode(LedG,OUTPUT);

  attachInterrupt(digitalPinToInterrupt(senRead), PD_ISR, FALLING);

  digitalWrite(pd,HIGH); //supply 5 volts to photodiode
  digitalWrite(LedG,LOW); //set the Green Led in off mode (initial condition)

  Serial.begin(9600); 

  sei();

}

void loop() {
  // put your main code here, to run repeatedly:
  
  delay(1000);

  rpm = 30*1000/(millis() - timeold)*rpmcount;
  timeold = millis();
  rpmcount = 0;

  //Write it out to serial port
  Serial.println(rpm,DEC);


}


void PD_ISR() {
  rpmcount++;
  digitalWrite(LedG,!digitalRead(LedG));

}
