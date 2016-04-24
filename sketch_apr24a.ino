int sensorPin= A0;
int sensorvalue=0; 
void setup() {
  // put your setup code here, to run once:
pin mode (2,OUTPUT);
serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
sensor value=analogRead(sensorPin);
sensor.printin(sensor value);
if (sensor value<700)
digital write(2,HIGH);
else
digital write(2,LOW);
delay(100);
}
