#include <stdio.h>
// The sprintf function formats and store a series of characters and values as a string

int main() 
{
    int num = 12345;
    char str[20]; // Make sure the array is large enough to hold the converted string
    
    sprintf(str, "%d", num); // Convert integer to string
    
    printf("The string representation is: %s\n", str);
    
    return 0;
}