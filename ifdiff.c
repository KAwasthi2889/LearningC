#include <stdio.h>
int main()
{
    int num1,num2,diff;
    printf("Write any 2 numbers:\n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
     {
        diff = num1-num2;
        printf("The diffrence between %d and %d is %d\n",num1,num2,diff);
     }
    else
     {
        diff = num2-num1;
        printf("The diffrence between %d and %d is %d\n",num2,num1,diff);
     }
    return 0;
}