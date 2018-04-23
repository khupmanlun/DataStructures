#include<stdio.h>
#include<stdlib.h>
struct linkedlist{
    int data;
    struct linkedlist *next;
};
typedef struct  linkedlist  *node;
node head = NULL;
node create(){
    node temp = (node)malloc(sizeof(struct linkedlist));
    temp->next = NULL;
    return temp;  
};
node insert(int data){
    node newNode,p;
    newNode = create();
    newNode->data = data;
    if(head = NULL){
        head = newNode;
    }
    else{
        p = head;
        while(p->next!=NULL){
            p = p->next;
        }
        p->next = newNode;
    }
 return head;
};
void printList(node head){
    if(head!=NULL){
            while(head!=NULL){
            printf("%d-->",head->data);
            head = head->next;
        }
    printf("NULL");
    }
}
int main(void){
    head = insert(1);
    head = insert(3);
    printList(head);

}