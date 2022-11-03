#ifndef _HEADER_
#define _HEADER_

/*
 * file: dog.h
 * description: header file that defines a new type struct dog
 */

/**
 * struct dog - dog attributes
 * @name: input
 * @age: input
 * @owner: input
 *
 * description: the attributes of a dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
