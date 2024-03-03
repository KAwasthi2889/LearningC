#include <stdio.h>
#include <string.h>

int main()
{
    struct Student
    {
        char name[50];
        int age;
    };

    struct Student student1, student2, student3;

    student3.age = 23;
    strcpy(student3.name, "ghi");
    student2.age = 22;
    strcpy(student2.name, "def");
    student1.age = 21;
    strcpy(student1.name, "abc");

    struct Student students[] = {student1, student2, student3};

    for (int i = 0; i < 3; i++)
    {
        printf("%s ", students[i].name);
        printf("%d\n", students[i].age);
    }

    return 0;
}
