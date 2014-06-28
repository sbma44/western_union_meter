int inByte = 0;         // incoming serial byte
int meterPin = 11;

void setup()
{
  // start serial port at 9600 bps:
  Serial.begin(9600);
  pinMode(meterPin, OUTPUT);   // digital sensor is on digital pin 2

}

void loop()
{
  // if we get a valid byte, read analog ins:
  if (Serial.available() > 0) {
    // get incoming byte:
    inByte = Serial.read();
    
    analogWrite(meterPin, inByte);
}


