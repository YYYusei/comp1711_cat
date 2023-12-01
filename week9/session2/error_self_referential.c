#include <stdio.h>

 typedef struct list{
    int data;
    list *next_element;
} list;

int main()
{
    list *head = NULL;
    head = malloc(sizeof(list));
    head->data = 10;
    head->next_element = malloc(sizeof(list));
    list *current_element = 
    head->next_element->data = 20;
    head->next_element->next_element = NULL;
    free(head);
    free(current_element);
    return 0;
}