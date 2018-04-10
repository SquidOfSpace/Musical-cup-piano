# Project Title

Musical Cup Piano

![Cup Keyboard](https://i.gyazo.com/a296532e3716f50373c50340b9cd006c.jpg)

## Items Needed

My build has:

	-Arduino x2
	-Photoresistors x8
	-Breadboards x4
	-560 ohm resistors x8
	-Piezo speakers x8 (additional resistors may be needed depending on the piezo speaker)
	-2 boxes (about shoebox size)
	-8 plastic shot class cups

### Installing

To install this on to your Arduinos, just take the code and throw it into the Arduino program. Make sure you add 'pitches.h' into another tab in each of the Arduino code areas

## Running the tests

With how this is set up, the serial print will print you the values for each photoresistor. Adjust the thresholding aka the '(photo_value(2/3/4) > **80**)' part of the code to respond only when you hover your hand slightly over each cup.

## Other Notes

In my build, I soldered the photoresistors to some wire so that they had room to stick up out of the box I had placed them in comfortably. The breadboards laid on the bottom of the box with the photoresistors sticking up out of it. This deafens the piezo speakers a lot so if you have a loud piezo speaker you may be able to not use a resistor for it, barring the voltage isn't too high. 

## Contributing

This is a free to edit project 

## Authors

* **Lauren Krauss** - *Initial work*

## License

This project is licensed under The Unlicense - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Trevor Tomesh, for being the prof of the class 
* bonniee, for the idea for the project (http://www.instructables.com/id/Illumaphone-Light-based-Electronic-Musical-Instrum/)
* My parents, for helping me with ideas and with the supplies
* My friend Erika, for supplying me with some last minute parts I did not realize I needed.
