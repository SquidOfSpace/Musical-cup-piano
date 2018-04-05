

#include "pitches.h"

//constants
const int photoPin = A0;
const int photoPin2 = A1;
const int piezo = 7;
const int piezo2 = 6;

// variables
int photo_value;
int photo_value2;



void setup()
{

  pinMode(piezo, OUTPUT);
  pinMode(piezo2, OUTPUT);

  Serial.begin(9600); // setting up the serial monitor
}

void loop() {
  photo_value = analogRead(photoPin);//reads voltage from the photoresistor
  photo_value2 = analogRead(photoPin2);

  Serial.print("I just read: "); //Print the text 'i just read' on the serial monitor
  Serial.println(photo_value);
  Serial.println(photo_value2);
{

    {
      if (photo_value < 70)
      {
        tone(piezo, NOTE_C6);
      }
      else
      {
        noTone(piezo);
      }
    }
    {
      if (photo_value2 < 100)
      {
        tone(piezo2, NOTE_D6);
      }
      else
      {
        noTone(piezo2);
      }
    }
    
}
