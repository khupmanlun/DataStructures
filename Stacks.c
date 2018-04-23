//Program to create a simple stack
#include<stdio.h>
#define MAX 100
int top = -1;
void push(int Stack[],int data, int N){
    if(top == N-1){
        printf("The stack is full !\n");
    }
    else{
        top = top + 1;
        Stack[top] = data;
    }
}
void pop(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        //printf("%d is removed",Stack[top]);
        top = top - 1 ;
    }
}
int main(void){
 
    int N,i;
    int Stack[MAX];
    printf("What size for your stack: \t");
    scanf("%d",&N);
    pop();
    printf("\nNow let us push some!");
    push(Stack,1,N);
    push(Stack,2,N);
    printf("The top of the stack is %d\n",Stack[top]);
    pop();
    for(i=0;i<=top;i++){
        printf("\nStack[%d]: %d\n",i,Stack[i]);
    }
    
}