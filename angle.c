#include <stdio.h>
int main()
{
    int ang1,ang2,ang3,sum;
    printf("Write any 3 angles (in degrees):\n");
    scanf("%d%d%d",&ang1,&ang2,&ang3);
    sum=ang1+ang2+ang3;
    if(sum==180)
        printf("Angle %d, %d and %d form a triangle.\n",ang1,ang2,ang3);
    else
        printf("The sum of angle %d, %d and %d is %d which cannot form a triangle.\n",ang1,ang2,ang3,sum);
    return 0;
}