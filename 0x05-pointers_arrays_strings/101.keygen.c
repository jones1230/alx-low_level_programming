#include "main.h"

#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - Generates random char
 *
 * Return: Always 0 (Success)
 */



int main(void)

{

	int num;



	srand(time(0));

	num = rand();

	printf("%i\n", num);

	return (0);

}

