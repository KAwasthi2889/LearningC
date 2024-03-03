#include <stdio.h>
#include <string.h>

void stud_function()
{
    struct Student
    {
        char name[50];
        int age;
    };

    struct Student students[3]; // Define an array of students

    for (int j = 0; j < 3; j++)
    {
        printf("Enter the name of student %d\n", j + 1);
        scanf("%s", students[j].name);
        printf("Enter the age of student %d\n", j + 1);
        scanf("%d", &students[j].age); // Use address-of operator to store input in age
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", students[i].name);
        printf("%d\n", students[i].age);
    }
}

int main()
{
    stud_function();
    return 0;
}
