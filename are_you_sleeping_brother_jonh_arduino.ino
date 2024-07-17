#include <Tone.h>

Tone tone1;

const int c4 = 261;  // C4
const int d4 = 294;  // D4
const int e4 = 329;  // E4
const int f4 = 349;  // F4
const int g4 = 391;  // G4
const int a4 = 440;  // A4
const int b4 = 493;  // B4
const int c5 = 523;  // C5

void setup() {
  pinMode(8, OUTPUT);
  tone1.begin(8);

}
void beep(int note, int duration){
  tone1.play(note, duration);
  while(tone1.isPlaying()){
    delay(duration);
  }
  tone1.stop();
}

void loop() {
  beep(c4, 500);
  beep(d4, 500);
  beep(e4, 500);
  beep(c4, 500);
  beep(c4, 500);
  beep(d4, 500);
  beep(e4, 500);
  beep(c4, 500);
  beep(e4, 500);
  beep(f4, 500);
  beep(g4, 750);
  beep(e4, 500);
  beep(f4, 500);
  beep(g4, 750);
  beep(g4, 250);
  beep(a4, 250);
  beep(g4, 250);
  beep(f4, 250);
  beep(e4, 500);
  beep(c4, 500);
  beep(g4, 250);
  beep(a4, 250);
  beep(g4, 250);
  beep(f4, 250);
  beep(e4, 500);
  beep(c4, 500);
  beep(c4, 750);
  beep(g4/2, 750);
  beep(c4, 750);
  beep(c4, 750);
  beep(g4/2, 750);
  beep(c4, 1000);
  delay(1000);
 }
