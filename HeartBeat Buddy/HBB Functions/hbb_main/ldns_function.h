  int loudness;
void loudness_setup (){

  unsigned static int myLoudPin = 3;
}

void loudness_data () {
    loudness = analogRead(3);
    Serial.print (loudness);

    delay(200);
}