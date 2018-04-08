#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct linkedList{
    int data;
    struct linkedList* next;
};
    typedef struct linkedList *node;
    node head = NULL;//this is the head

//this function counts the number of nodes in the linked list
int countList(node head){
    int count = 0;
    while(head!=NULL){
        head = head->next;
        count++;
    }
    return count;
}
node create(){
  node temp;
  temp = (node)malloc(sizeof(struct linkedList));
  temp->next = NULL;
  return temp;
}
node addNode(int data){
    node temp,p;
    temp = create();
    temp->data = data;
    if(head==NULL){
        head = temp;
    }
    else{
        p = head;
        while(p->next!=NULL){
            p = p->next; 
        }
        p->next = temp;
    }
    return head;
};
node insertNode(node head,int position){
    node newNode,p,q;
    int data;
    int count = countList(head);
    newNode = (node)malloc(sizeof(struct linkedList));
    
    int k = 1;
    if(head==NULL){
        printf("\nThe list is empty!Create the list first!\n");
        return NULL;
        
    }
    printf("\nType the data:\t");
    scanf("%d",&data);
    newNode->data = data;
    p = head;
    if(position == 1){
        newNode->next = head; 
        head = newNode;        
   }
    else if(position!=1 && position!=MAX && position<count){
        while(k<position && head!=NULL){
            k++;
            q = p;
            p = p->next;
        }
        q->next = newNode;
        newNode->next = p;
    }
    else if(position==count){
        while(p->next!=NULL){
            p = p->next;
        }
        p->next = newNode;
        newNode->next = NULL;
    }
    else{
            printf("The position is greater than size of the current list!\n");
    }
    return head;
};
node deleteNode(node head,int position){
    node p,q;
    int k = 1,count = countList(head);
    if(head==NULL){
        printf("Nothing to delete\n");
        return head;
    }
     p = head;
    if(position>count){
       
             printf("\nThe position is greater than size of the current list!\n");
        return head;
    }
     if(position == 1){
         head = head->next;
         free(p);
     }
     else if(position!=1 && position!=MAX && position<=count){
         while(k<position && p!=NULL){
             k++;
             q = p;
             p = p->next;
         }
        if(p==NULL){
             printf("The node you  are searching  to insert is NULL!");
        }
        else{
            q->next = p->next;
            free(p);
        }
     }
   
    return head;
};
void printNode(node head){
    if(head==NULL){
        printf("The list is empty!Insert some!");
    }
    while(head!=NULL){
        printf("%d-->",head->data);
        head= head->next;
    }
    printf("\n");
};
int main(void){
    int choose,data,position;
    char cont ='y';
   int count;
    perror("The Maxsize of your linked list is 100!");
    while(cont=='y'){
        printf("\nType the nos :\n1. Add a node \n2. Insert a node at desired place \n3. Delete a node at desired place \n4.print the list\n5.No of nodes : \n");
        scanf("%d",&choose);
        switch(choose)
        {
        case 1:
            printf("Type the data you want to insert: \t");
            scanf("%d",&data);
            head = addNode(data);
            break;
        case 2:
            printf("Type the position where you want to insert!:\t");
            scanf("%d",&position);
            head = insertNode(head,position);
            break;
        case 3:
            printf("Type the position where you want to Delete!:\t");
            scanf("%d",&position);
            head = deleteNode(head,position);
            break;
        case 4:
            printNode(head);
            break;
        case 5:
            count  = countList(head);
            count==0?printf("\n it is empty\n"):printf("%d\n",count);
            break;
        default:
            printf("\ninvalid case!Try again\n");
            break;
        
        }
        printf("Type y or n to continue or exit : ");
        scanf("%s",&cont);
    }
}
