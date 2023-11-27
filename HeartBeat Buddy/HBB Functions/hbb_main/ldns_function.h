  int loudness;
  static unsigned int myBuzzer = 3;
  unsigned static int myLoudPin = 0;

void loudness_data () {
    loudness = analogRead(3);
    Serial.println("Loudness is:");
    Serial.print(loudness);
    delay(200);
}
