#ifndef STRUCTURES_TYPEDEF
#define STRUCTURES_TYPEDEF
/**
 * struct dog - dog structure (class)
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name of the dog
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
