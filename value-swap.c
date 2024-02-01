#include <stdio.h>
int main()
{
    char v1, v2;
    int v3, v4, temp;
    printf("What is the first variable?\n");
    scanf("%c", &v1);
    printf("What is the second variable?\n");
    scanf(" %c", &v2);
    printf("Enter value of %c\n", v1);
    scanf("%d", &v3);
    printf("Enter value of %c\n", v2);
    scanf("%d", &v4);
    printf("Before swapping, the value of %c is %d and %c is %d. ", v1, v3, v2, v4);
    temp=v3;
    v3=v4;
    v4=temp;
    printf("After swapping, the value of %c is %d and %c is %d.\n", v1, v3, v2, v4);
    return 0;
}