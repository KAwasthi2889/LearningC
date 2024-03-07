#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10 // Used a macro instead of variable to give dynamic memory without malloc

int main() 
{
    int int_array[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7}; // Array with 7 elements filled
    char str_array[ARRAY_SIZE + 1]; // +1 for null terminator

    // Convert integer array to string array
    for (int i = 0; i < ARRAY_SIZE; i++) 
    {
        if (int_array[i] != '\0') 
        {
            sprintf(&str_array[i], "%d", int_array[i]);
        } 
        else 
            break;
    }

    // Find the index of the null terminator
    int num_elements = 0;
    while (str_array[num_elements] != '\0') 
    {
        num_elements++;
    }

    printf("Number of elements in the array: %d\n", num_elements);

    return 0;
}