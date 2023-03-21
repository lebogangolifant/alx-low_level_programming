#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of a dog
 * @name: pointer to a character string
 * @age: floating-point number
 * @owner: pointer to a character string
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

