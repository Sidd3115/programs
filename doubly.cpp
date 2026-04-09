#include <stdio.h>
#include <stdlib.h>
struct node 
{
int data;
struct node *prev;
struct node *next;
};
struct node *head = NULL;
void insert(int x)
 {
struct node *newnode, *temp;
newnode = (struct node*)malloc(sizeof(struct node));
newnode->data = x;
newnode->next = NULL;
if(head == NULL)
 {
newnode->prev = NULL;
head = newnode;
} else
{
temp = head;
while(temp->next != NULL) 
{
temp = temp->next;
}
temp->next = newnode;
newnode->prev = temp;
}
}
void display()
{
struct node *temp = head;
while(temp != NULL) 
{
printf("%d <-> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
}
int main() 
{
insert(10);
insert(20);
insert(30);
display();
return 0;
}
