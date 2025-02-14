#include<stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define MAX 10
int *stack=NULL;
// int stack[MAX];
// int top= -1;
// int push(int x){
//     top++;
//     stack[top]=x;
// }
// int pop(){
//     printf("%d is deleted.", stack[top]);
//     top--;;
   
// }
// int peek(){
//     printf("%d is the topmost. \n",stack[top]);
// }
// int display(){
//     int i;
//     for(i=top;i>=0;i--)
//         printf("%d\n",stack[i]);
    
// }
// int main(){
//     int x,ch;
//     char c;
//     do{
        
//         printf("Enter 1 to push 2 to pop and 3 to peek 4 to display ");
//         scanf("%d",&ch);
//         switch(ch){
//             case 1:
//                     scanf("%d",&x);
//                     push(x);
//                     break;
//             case 2:
//                     pop();
//                     break;
//             case 3:
//                     peek();
//                     break;
//             case 4:
//                     display();
//                     break;
//             default: 
//                     exit(0);
//         }
        
//     }while(1);
// }

//using DMA
int top= -1;



int push(int x){
    top++;
    stack[top] = x;
}
int pop(){
    printf("%d is deleted.", *(stack + top));
    top--;
   
}
int peek(){
    printf("%d is the topmost. \n",*(stack+top));
}
int display(){
    int i;
    for(i=top;i>=0;i--)
        printf("%d\n",stack[i]);
    
}
int main(){
    

    int x,ch;
    char c;
    do{
        
        printf("Enter 1 to push 2 to pop and 3 to peek 4 to display ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                 stack= (int*)malloc(sizeof(int));
                    scanf("%d",&x);
                    push(x);
                    break;
            case 2:
                    pop();
                    break;
            case 3:
                    peek();
                    break;
            case 4:
                    display();
                    break;
            default: 
                    exit(0);
        }
        
    }while(1);
}

