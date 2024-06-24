#include <stdio.h>
#include <stdlib.h>

struct Node;
struct Node* head;

void create(int data); 
void print(); 

int main(void) 
{
    create(5);
    create(10);
    create(15);
    create(20);
    print();
}

struct Node {
    int data;
    struct Node* next;
};

void create(int data) 
{
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = head;
    head = newNode;
}

void print() 
{
    printf("Linked List: ");
    struct Node* current = head;
    while (current -> next != NULL) 
    {
        printf("%d => ", current -> data);
        current = current -> next;
    }
    printf("%d => END\n", current -> data);
}