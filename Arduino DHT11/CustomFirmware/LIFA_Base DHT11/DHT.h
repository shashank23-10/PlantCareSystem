#ifndef DHT_H
#define DHT_H
#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

/* DHT library 

MIT license
written by Adafruit Industries
*/

// how many timing transitions we need to keep track of. 2 * number bits + extra
#define MAXTIMINGS 85

#define DHT11 0
#define DHT21 1
#define DHT22 2
//#define AM2301 1 // same as DH21

class DHT {
 private:
  uint8_t data[6];
  uint8_t _pin, _type, _count;
  boolean read(void);
  unsigned long _lastreadtime;
  boolean firstreading;

 public:
  DHT(void);
  void begin(uint8_t pin, uint8_t type, uint8_t count=6);
  float readTemperature(bool S=false);
  float convertCtoF(float);
  float readHumidity(void);
  unsigned long readRawData();

};
#endif
