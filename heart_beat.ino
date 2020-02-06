/* *******************
 *  Name-Rohit Maurya
 *  date-06/02/20
 *  discription- count the heart beat
 */
 // senseor pin connected to analog pin
#define SensorPin A0

void setup() {
Serial.begin(9600);
pinMode(SensorPin,INPUT);

}

void loop() {
  /* print heat beat on  serial port*/
  Serial.println(analogRead(SensorPin));
  delay(1000);
}
