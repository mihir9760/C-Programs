#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int n;
    struct node *next;
    }
node;

int main(void) {
    int size, i;
    printf("Enter the no. of elements\n");
    scanf("%d", &size);
    //Initializing the first node of the Linked-List.
    node *first = malloc(sizeof(node));
    //return if the memory is not available.
    if(first == NULL)
    {
        return 1;
    }
    first->n = 5;
    node *ptr=NULL;
    ptr = first;
    size -= 1;
    int s = size;
    //Initializing the remaining nodes of the Linked-List.
    while(s != 0)
    {

       ptr->next = malloc(sizeof(node));
       ptr = ptr->next;
       ptr->n = s;
       if(s == 1)
       {
           ptr->next = NULL;
       }

       s--;
    }

    //Free the Memory allocated to the Data structure, Linked-List.
    while(first->next != NULL)
    {
        ptr = first;
        first = first->next;
        free(ptr);
    }
    free(first);
    return 0;
}
