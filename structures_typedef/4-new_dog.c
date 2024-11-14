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
char *cp_str;
int i;
int len;
if (str == NULL)
return (NULL);
for (len = 0; str[len] != '\0'; len++)
;
cp_str = malloc((len + 1) * sizeof(char));
if (cp_str == NULL)
return (NULL);
for (i = 0; i < len; i++)
cp_str[i] = str[i];
cp_str[len] = '\0';
return (cp_str);
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
		{
		free(dog);
		return (NULL);
		}
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

