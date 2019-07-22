#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct with elements name, age, owner
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: struct for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif /*DOG_H*/
