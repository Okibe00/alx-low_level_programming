#include "dog.h"

/**
  * new_dog - creates new dog
  * @name: naem of dog
  * @age: age of dog
  * @owner: name of owner
  * description: creats a new dog
  * Return: new dog ptr
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name, len_owner;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	len_name = _strlen_recursion(name);
	len_owner = _strlen_recursion(owner);
	new_dog->owner = malloc((sizeof(char) * len_owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_memcpy(new_dog->owner, owner, len_owner);
	new_dog->name = malloc((sizeof(char) * len_name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	_memcpy(new_dog->name, name, len_name);
	new_dog->age = age;
	return (new_dog);
}

/**
* _memcpy - copies mem area
* @dest: dest mem area
* @src: srcc mem area
* @n: num of bytes to copy
* description: copies mem area and return pointer to new area
* Return: pointer to dest
*/




char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen_recursion - gets the length of a string
 * @s: string
 * description: gets the length of a string using recursion
 * Return: string length
*/


int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (s == NULL)
	{
		return (len);
	}
	if (*s != '\0')
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
	else
	{
		return (len);
	}
}
