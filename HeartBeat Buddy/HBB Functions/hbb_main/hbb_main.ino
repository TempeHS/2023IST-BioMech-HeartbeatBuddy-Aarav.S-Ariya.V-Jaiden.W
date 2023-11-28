#include "ldns_function.h"
#include "GSR_function.h"
#include "hrmon_function.h"
#include <Wire.h>




void setup (){
Serial.begin(9600);
Serial.print ("SM Working");
hrs_setup ();

}

void loop (){
loudness_data ();
GSR_Data ();
hrs_data ();
}