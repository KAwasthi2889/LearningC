#include <stdio.h>
#include <string.h>

struct Org 
{
    char name[20];
    int IDno;
    int age;
};

void printEmployeeInfo(struct Org employee, char* info) 
{
    if (strcmp(info, "Name") == 0)
        printf("%s\n", employee.name);
    else if (strcmp(info, "IDno") == 0)
        printf("%d\n", employee.IDno);
    else if (strcmp(info, "Age") == 0)
        printf("%d\n", employee.age);
}

int main() 
{
    struct Org employees[2] = {{"Kaustubh", 556748, 22}, {"Awasthi", 349854, 24}};
    
    printf("Which employee's information do you want? (1 or 2)\n");
    int num;
    scanf("%d", &num);

    printf("What information do you want? (Name, IDno, Age)\n");
    char info[5];
    scanf("%s", info);

    printf("Name\tIDno\tAge\n");
    
    if (num == 1 || num == 2) {
        printEmployeeInfo(employees[num - 1], info);
    } else {
        printf("Invalid employee number\n");
    }

    return 0;
}
