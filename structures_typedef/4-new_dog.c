#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: buffer to copy to
 * @src: string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog (dog_t), or NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n, *o;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	n = malloc(_strlen(name) + 1);
	if (n == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(n, name);

	o = malloc(_strlen(owner) + 1);
	if (o == NULL)
	{
		free(n);
		free(d);
		return (NULL);
	}
	_strcpy(o, owner);

	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}
