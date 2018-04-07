/*
Cup Keyboard
a keyboard in a whole note octave that uses photoresistors to make note sounds
By Lauren Krauss
*/
#include "pitches.h"

//constants
const int photoPin = A0; 
const int photoPin2 = A1;
const int photoPin3 = A2;
const int photoPin4 = A3;
const int photoPin5 = A4;
const int photoPin6 = A5;
const int piezo = 7;
const int piezo2 = 6;
const int piezo3 = 5;
const int piezo4 = 4;
const int piezo5 = 3;
const int piezo6 = 2;
//these constants are for the photoresistors(photopin) and the piezo buzzers(piezo)


// variables
int photo_value;
int photo_value2;
int photo_value3;
int photo_value4;
int photo_value5;
int photo_value6;
//(these variables are for the values returned by the photoresistors)

void setup()
{

  pinMode(piezo, OUTPUT);
  pinMode(piezo2, OUTPUT);
  pinMode(piezo3, OUTPUT);
  pinMode(piezo4, OUTPUT);
  pinMode(piezo5, OUTPUT);
  pinMode(piezo6, OUTPUT);
  //sets all the piezo buzzers to outputs

  Serial.begin(9600); // setting up the serial monitor

}



void loop()
{

  photo_value = analogRead(photoPin);//reads voltage from the photoresistor
  photo_value2 = analogRead(photoPin2);
  photo_value3 = analogRead(photoPin3);
  photo_value4 = analogRead(photoPin4);
  photo_value5 = analogRead(photoPin5);
  photo_value6 = analogRead(photoPin6);

  Serial.print("I just read: "); //Print the text 'i just read' on the serial monitor and also the photo values (helpful for adjusting thresholding)
  Serial.println(photo_value);
  Serial.println(photo_value2);
  Serial.println(photo_value3);
  Serial.println(photo_value4);
  Serial.println(photo_value5);
  Serial.println(photo_value6);

//the if else statements for the activation of the piezo speakers
  {

    {
      if (photo_value < 80)
      {
        tone(piezo, NOTE_C7);
      }
      else
      {
        noTone(piezo);
      }
    }
    {
      if (photo_value2 < 80)
      {
        tone(piezo2, NOTE_D7);
      }
      else
      {
        noTone(piezo2);
      }
    }
    {

      if (photo_value3 < 100)
      {
        tone(piezo3, NOTE_E6);
      }
      else
      {
        noTone(piezo3);
      }
    }
    {
      if (photo_value4 < 70)
      {
        tone(piezo4, NOTE_F6);
      }
      else
      {
        noTone(piezo4);
      }
    }


    {
      if (photo_value5 < 70)
      {
        tone(piezo5, NOTE_G6);
      }
      else
      {
        noTone(piezo5);
      }

    }
    {
      if (photo_value6 < 70)
      {
        tone(piezo6, NOTE_A6);
      }
      else
      {
        noTone(piezo6);
      }
    }
  }
}

