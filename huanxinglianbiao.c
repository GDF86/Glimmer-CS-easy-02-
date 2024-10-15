#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
   int data;
   struct Node*next;
}Node;

Node*initList(){
    Node*head=NULL;
    return head;
}

void insertAtHead(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}