#ifndef dog_h
#define dog_h

/**
 * struct dog - new type structure
 * @name: first member
 * @age: second member
 * @owner: third memeber
 * the header file defines a structure named dog, with three members
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog_t - redefining type structure
 * @name: first member
 * @age: second member
 * @owner: third member
 * this thaches the sturcture named to dog to dog_t, with three members
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
