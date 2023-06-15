#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

/**
 * main - a program that prints a line to the standatd error
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return(1);
}
