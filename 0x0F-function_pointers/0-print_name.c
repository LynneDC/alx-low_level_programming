#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f:pointer to name
 * Returns: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print_to_console - prints name to the console
 * @name: input
 * Return: void
 */

void print_to_console(char *name)
{
	printf("name: %s\n", name);
}
