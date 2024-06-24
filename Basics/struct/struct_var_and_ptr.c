// The . operator is used when you have a struct variable,
// and you want to access a member of that struct. 
// For example, if you have a struct person with members name and age, 
// and you have a variable p of type person, 
// you would use p.name to access the name member of the p struct.

// The -> operator is used when you have a pointer to a struct, 
// and you want to access a member of that struct. 
// For example, if you have a pointer p of type person*, 
// you would use p->name to access the name member of the struct that p is pointing to.

#include <stdio.h>

struct Person 
{
    char name[20];
    int age;
};

int main() 
{
    struct Person p1 = {"John", 30};
    struct Person* p2 = &p1;

    printf("p1.name: %s\n", p1.name); // Accessing struct member using dot operator
    printf("p1.age: %d\n", p1.age);

    printf("p2 -> name: %s\n", p2 -> name); // Accessing struct member using arrow operator
    printf("p2 -> age: %d\n", p2 -> age);

    return 0;
}