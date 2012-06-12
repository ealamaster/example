/*
 * main.c
 *
 *  Created on: May 18, 2012
 *      Author: eal
 */

// Just a test

#include <avr/io.h>


int main()
{
	for(;;)
	{
		__asm__ __volatile__("nop");	// Do nothing.
	}
}
