#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog
 * @n: name
 * @a: age
 * @guardian:  guardian
 * Description: This struct is for dog
 */

struct dog
{
	char *n;
	float a;
	char *guardian;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *n, float a, char *guardian);
void print_dog(struct dog *d);
dog_t *new_dog(char *n, float a, char *guardian);
void free_dog(dog_t *d);

#endif /*DOG_H*/
