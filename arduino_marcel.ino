/*
 * Autor: Marcel Plesky
 * Datum: 02.04.2019
 * Version: 1.7
 * 
 * Ich habe die Vorlage der chaserLights (Fritzing) benutzt.
  
  This example is part of the Fritzing Creator Kit: www.fritzing.org/creator-kit.
*/

//Konstanten
const int buttonPin = 2;                 // Nummer des Pins für den Button
const int pinsCount = 5;                 // Deklariere die int Variable pinCount für die Anzahl LEDs
const int pins[] = {5,6,7,8,9};          // Deklariere das Array pins[]

//Variabel
int buttonState = 0;                     // Variabel um den Status des Buttons zu lesen

void setup() {  
  pinMode(buttonPin, INPUT);              // Initialisiere den Button-Pin als INPUT  
  for (int i=0; i<pinsCount; i=i+1){      // Zähle die Variabel i von 0 bis 5
    pinMode(pins[i], OUTPUT);             // Initialisiere den Pin beim Index i des Arrays als OUTPUT
  }
}

void loop() {
  buttonState = digitalRead(buttonPin);   // Lese den Status des Button Wertes
  if(buttonState == HIGH){
    for (int i=4; i>-1; i=i-1){           // Von links nach rechts
      digitalWrite(pins[i], HIGH);        // Schalte die LEDs beim Index i an
      delay(1000);                        // Pause von 1000 Millisekunden (1 Sekunde)
    }
  //Hier werden alle LEDs ohne Stopp ausgeschaltet:  
  digitalWrite(pins[0], LOW);
  digitalWrite(pins[1], LOW);
  digitalWrite(pins[2], LOW);
  digitalWrite(pins[3], LOW);
  digitalWrite(pins[4], LOW);
  }
}
