//2. Reverse a Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node *createnode(int data){
    node *newnode = (node *)malloc(sizeof(node));
    newnode -> data = data;
    newnode -> next = NULL;
    return newnode;
}

void insert(node **head, int data){
    if(*head == NULL)
        *head = createnode(data);
    else{
        node *temp = *head;
        while((temp -> next) != NULL){
            temp = temp->next;
        }
        temp->next = createnode(data);
    }
}

void print(node *head){
    node *temp = head;
    while(temp){
        printf("%d -> ", temp->data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

void reverse_ll(node **head){
    node *cur, *prev = NULL, *next = NULL;
    cur = *head;
    while(cur){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    *head = prev;
}

int main(){
    node *head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    print(head);
    
    reverse_ll(&head);
    print(head);
    
    return 0;
}
