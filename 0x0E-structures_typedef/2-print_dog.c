#include <stdio.h>
/**
 * print_dog - printing the dog struct
 * @d: dog struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: %s\n", "(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == NULL)
	{
		printf("Age: %s\n", "(nil)");
	}
	else
	{
		printf("Age: %.1f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: %s\n", "(nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
