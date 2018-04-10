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

const int piezo = 7;
const int piezo2 = 6;
const int piezo3 = 5;
const int piezo4 = 4;

//these constants are for the photoresistors(photopin) and the piezo buzzers(piezo)


// variables
int photo_value;
int photo_value2;
int photo_value3;
int photo_value4;

//(these variables are for the values returned by the photoresistors)

void setup()
{

  pinMode(piezo, OUTPUT);
  pinMode(piezo2, OUTPUT);
  pinMode(piezo3, OUTPUT);
  pinMode(piezo4, OUTPUT);
  //sets all the piezo buzzers to outputs

  Serial.begin(9600); // setting up the serial monitor

}



void loop()
{

  photo_value = analogRead(photoPin);//reads voltage from the photoresistor
  photo_value2 = analogRead(photoPin2);
  photo_value3 = analogRead(photoPin3);
  photo_value4 = analogRead(photoPin4);


  Serial.print("I just read: "); //Print the text 'i just read' on the serial monitor and also the photo values (helpful for adjusting thresholding)
  Serial.println(photo_value);
  Serial.println(photo_value2);
  Serial.println(photo_value3);
  Serial.println(photo_value4);


  //the if else statements for the activation of the piezo speakers
  {





    {
      if (photo_value < 80)
      {
        tone(piezo, NOTE_C6);
      }
      else
      {
        noTone(piezo);
      }
    }
    {
      if (photo_value2 < 80)
      {
        tone(piezo2, NOTE_D6);
      }
      else
      {
        noTone(piezo2);
      }
    }
    {

      if (photo_value3 <  50)
      {
        tone(piezo3, NOTE_E6);
      }
      else
      {
        noTone(piezo3);
      }
    }
    {
      if (photo_value4 <  50)
      {
        tone(piezo4, NOTE_F6);
      }
      else
      {
        noTone(piezo4);
      }
    }
  }
}


