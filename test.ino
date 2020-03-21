#include <Wire.h>
#include <Adafruit_MPL3115A2.h>
#include <ADXL345.h>

// connect Vin to 3-5V, GND to GND
// use I2C - connect SCL to the SCL pin, SDA to SDA pin
Adafruit_MPL3115A2 baro = Adafruit_MPL3115A2();

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (! baro.begin()) {
    #Serial.println("Couldnt find sensor");
    return;
  }

  float tempC = baro.getTemperature();
  Serial.print(tempC);
  
  delay(250);

}
