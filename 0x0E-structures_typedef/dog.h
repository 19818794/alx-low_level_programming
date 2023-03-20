#ifndef DOG_H
#define DOG_H

/**
 * struct dog - type struct dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: a type for dog animals.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
