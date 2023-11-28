#include <Wire.h>


void hrs_setup () {
    Wire.begin();

}
  
void hrs_data() {
    Wire.requestFrom(0xA0 >> 1, 1);    // request 1 bytes from slave device
    while(Wire.available()) {          // slave may send less than requested
        unsigned char c = Wire.read();   // receive heart rate value (a byte)
            Serial.println("heart rate sensor: ");
        Serial.println(c, DEC);         // print heart rate value
    }
    delay(500);
}