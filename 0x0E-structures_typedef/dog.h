#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/*
 * struct dog - Dog function
 *
 * @name: name of dog
 *
 * @age: Dog age
 *
 * @owner: Owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void my_dog(struct dog d);
#endif
