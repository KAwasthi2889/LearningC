#include <stdio.h>
#include <stdlib.h>
// Take the element of array by user and allow the user to exit at any point if they wishes so

int main() 
{
    printf("How many elements do you want to enter?\n");
    int x;
    scanf("%d", &x);
    int arr[x];
    int size = 0;
    char input[10];

    printf("Enter elements into the array (enter 'x' to stop):\n");

    while (1) {
        printf("Enter element %d: ", size + 1);
        scanf("%s", input);

        if (input[0] == 'x' && input[1] == '\0')
            break;

        arr[size++] = atoi(input); // Convert input string to integer and store in array
    }

    printf("Elements in the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}