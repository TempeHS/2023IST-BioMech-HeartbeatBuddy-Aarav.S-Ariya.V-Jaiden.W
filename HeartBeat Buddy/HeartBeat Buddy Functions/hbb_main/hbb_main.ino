#include "loudness_function.h"

void loudness_setup ();

void setup (){
Serial.begin(9600);
Serial.print ("SM Working");
}

void loop (){
loudness_data ();

}