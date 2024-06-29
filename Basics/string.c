#include <stdio.h>

void main(void)
{
    char n = 'H';
    char *m = &n;
    printf("n: %c\n", *m); // need to derfrence a ptr to return value

    char *s1 = "Hi!"; // s1 is pointing to char 'H'
    printf("String: %s\n", s1); // cant do derefrence
    printf("String: %p\n", s1); // location in memory
    char *s2 = s1 + 1; // s2 points to 'i'
    printf("String: %s\n", s2); // s2 prints i!

    char s3[] = "Hi!";
    printf("String: %s\n", s1); // an array of char

    char *s4 = &s3[0]; // again pointing to H
    s3[2] = 'A';
    printf("String: %s\n", s4);
}