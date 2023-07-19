#ifndef dog_h
#define dog_h

/**
 * struct dog - new structure
 * @name: dog name
 * @age:dog age
 * @owner: owners name
 * Description: a dog information structure
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
