/* 
 *  Duman - Senden daha güzel 
 *  Arduino play music
*/

#define DO 262
#define RE 294
#define RE_S 311
#define MI 330
#define FA 349
#define FA_S 370
#define SOL 392
#define LA 440
#define SI 494
#define DO_INCE 523

// notes in the melody:
int melody[] = {
  MI, MI, MI, MI, FA_S, SOL, FA_S, 
  0, SI, LA, SOL, SOL, FA_S, SOL,
  0, MI, MI, MI, MI, FA_S, SOL, FA_S, 
  0, MI, RE_S, MI, RE_S, DO, DO
};

int noteDurations[] = {
  4, 6, 6, 4, 6, 4, 4, 2,
  4, 4, 6, 6, 6, 4, 2,
  4, 6, 6, 4, 6, 4, 4, 2,
  4, 4, 6, 6, 6, 4, 2,
};

void setup() {
  
  Serial.begin(9600);
  Serial.print("Size: ");
  Serial.println(sizeof(melody));
  for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(int); thisNote++) {
    
    Serial.println(noteDurations[thisNote]);
    int noteDuration = 1000 / noteDurations[thisNote];

    tone(3, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;

    delay(pauseBetweenNotes);

    noTone(3);

  }
}

void loop() {

}
