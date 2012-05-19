/*
 * main.c
 *
 *  Created on: May 18, 2012
 *      Author: eal
 */


#include <avr/io.h>


int main()
{
	for(;;)
	{
		__asm__ __volatile__("nop");	// Do nothing.
	}
}
