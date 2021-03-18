#include "dog.h"

/**
 * init_dog - function that initializes a var of type struct dog
 * @d: struct of type dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 * Return: nothing because it's a void function
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d != NULL)
        {
                d->name = name;
                d->owner = owner;
                d->age = age;
        }
}
