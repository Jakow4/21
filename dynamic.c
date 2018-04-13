#include <stdio.h>
#include <stdlib.h>

void push(struct node* head, int data) {
struct node* newNode = (struct node*)malloc(sizeof(struct node));
newNode->data = data;
newNode->next = head;
head = newNode;
}
void push_test() {
List head = build();
push(head, 1);
}
/*В программе отсутствовал указатель на структуру node */
