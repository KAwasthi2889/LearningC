#include <stdio.h>

int main() 
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (num <= 0) 
    {
        printf("Please enter a positive number\n");
    }
    if (num == 1) 
    {
        printf("1 is neither prime nor a composite number\n");
    }
    for (int i = 2; i < num; i++) 
    {
        if (num % i == 0) 
        {
            printf("%d is a composite number\n", num);
            return 0;
        }
    }
    printf("%d is a prime number\n", num);
    return 0;
}
