#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
* _strdup - duplicate a string by allocating memory
* @str: string to duplicate
* Return: pointer to dup str / NULL if fails or str is NULL
*
*/

char *_strdup(char *str)
{
int i;
char *array;
char *start;

if (str == NULL)
	return (NULL);

for (i = 0; str[i] != '\0'; i++)

array = malloc(sizeof(*array) * (i + 1));

if (array == NULL)
	return (NULL);

start = array;

while (*str)
{
*array = *str;
array++;
str++;
}
*array = '\0';
return (start);
}

/**
* new_dog - creates a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: new dog or NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

dog->name = _strdup(name);
	if (dog->name == NULL)
		free(dog);

dog->age = age;

dog->owner = _strdup(owner);
	if (dog->owner == NULL)
		{
		free(dog->name);
		free(dog);
		return (NULL);
		}
return (dog);
}
