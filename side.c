#include <stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Write any 3 sides of triangle:\n");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1+s2>s3&&s2+s3>s1&&s1+s3>s2)
    {   if(s1==s2&&s2==s3&&s1==s3)
            printf("The sum of all the 3 sides of triangle is equal, hence they can form an equilateral triangle.\n");
        else if(s1==s2||s2==s3||s1==s3)
            printf("The sum of 2 sides of triangle is greater than the 3rd side and its 2 sides are equal, hence they can form an isosceles triangle.\n");
        else
            printf("The sum of 2 sides of triangle is greater than the 3rd side, hence they can form a triangle.\n");
    }
    else
    printf("The sum of 2 sides of triangle is less than the 3rd side, hence they cannot form a triangle.\n");
    return 0;
}