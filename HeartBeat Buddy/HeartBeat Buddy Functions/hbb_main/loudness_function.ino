
void loudness_setup (){
  int loudness;
  unsigned static int myLoudPin = 0;
}

void loudness_data () {
    loudness = analogRead(0);
    Serial.println(loudness);
    delay(200);
}