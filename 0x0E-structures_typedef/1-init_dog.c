#include <stdlib.h>
#include "dog.h"

/**
* init_dog - Initializes a variable of type struct dog.
* @d: A pointer to struct dog to initialize.
* @name: The name to initialize.
* @age: The age to initialize.
* @owner: The owner to initialize.
*
* Description: This function initializes a struct dog with the provided
* name, age, and owner.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{

	/**
	* Handle the case where d is NULL. You can choose to do nothing
	* or allocate memory.
	*/

	return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
