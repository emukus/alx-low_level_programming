#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Struct name
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: struct dog with name, age, and owner elements
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
