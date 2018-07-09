/*Begining of Auto generated code by Atmel studio */
#include <Arduino.h>
#include "Mavg.h"
/*End of auto generated code by Atmel studio */


//Beginning of Auto generated function prototypes by Atmel Studio
//End of Auto generated function prototypes by Atmel Studio

/*
*/
#define NSAMPL 3
Mavg avg(NSAMPL);

// the setup function runs once when you press reset or power the board
void setup() {
	// initialize digital pin LED_BUILTIN as an output.
}

// the loop function runs over and over again forever
void loop() {
	unsigned long meanval;
	for (int i=0;i<100;i++)
	{
		avg.AddVal(i);
	}
	meanval=avg.Get();
	int fin=0;;
	
}
