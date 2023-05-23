#ifndef dog_h
#define dog_h

/**
 * struct dog - new type structure
 * @name: first member
 * @age: second member
 * @owner: third memeber
 * the header file defines a structure named dog, with three memebrs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
