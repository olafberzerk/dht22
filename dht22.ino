//
//    FILE: dht_test.ino
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.07
// PURPOSE: DHT Temperature & Humidity Sensor library for Arduino
//     URL: http://arduino.cc/playground/Main/DHTLib
//
// Released to the public domain
//

#include <arduino.h>
#include <dht.h>
//#include <wire.h>
//#include <LiquidCrystal_I2C.h>

#define DHT22_PIN 2

dht DHT;

void setup()
{
  Serial.begin(115200);
  Serial.println("DHT TEST PROGRAM ");
  Serial.print("LIBRARY VERSION: ");
  Serial.println(DHT_LIB_VERSION);
  Serial.println();
  Serial.println("Type,\tStatus,\tHumidity (%),\tTemperature (C),\tTemperature (F),\tTemperature (K),\tDewpoint (F)");
}

// delta max = 0.6544 wrt dewPoint()
// 6.9 x faster than dewPoint()
// reference: http://en.wikipedia.org/wiki/Dew_point
double dewPointFast(double celsius, double humidity)
{
	delay(2000);
	double a = 17.271;
	double b = 237.7;
	double temp = (a * celsius) / (b + celsius) + log(humidity*0.01);
	double Td = (b * temp) / (a - temp);
	return Td;
}

//Celsius to Kelvin conversion
double Kelvin(double celsius)
{
	return celsius + 273.15;
}

double Fahrenheit(double celsius)
{
	return 1.8 * celsius + 32;
}

void loop()
{
	// READ DATA

  Serial.print("DHT22, \t");
  int chk = DHT.read22(DHT22_PIN);
  switch (chk)
  {
    case DHTLIB_OK:
    Serial.print("OK,\t");
    break;
    case DHTLIB_ERROR_CHECKSUM:
    Serial.print("Checksum error,\t");
    break;
    case DHTLIB_ERROR_TIMEOUT:
    Serial.print("Time out error,\t");
    break;
    default:
    Serial.print("Unknown error,\t");
    break;
  }
  // DISPLAY DATA
  Serial.print(DHT.humidity, 2);
  Serial.print(",\t");
  Serial.print(DHT.temperature, 2);
  Serial.print(",\t");
  Serial.print(Fahrenheit(DHT.temperature), 2);
  Serial.print(",\t");
  Serial.print(Kelvin(DHT.temperature), 2);
  Serial.print(",\t");
  Serial.println(Fahrenheit(dewPointFast(DHT.temperature, DHT.humidity)), 2);

  delay(2000);
}

