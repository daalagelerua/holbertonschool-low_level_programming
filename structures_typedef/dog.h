#ifndef HOME_STRUCT
#define HOME_STRUCT

#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - structure storing dog info
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
