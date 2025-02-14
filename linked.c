#include <stdio.h>
#include<malloc.h>
struct node{
    int info;
    struct node *next;
};
// Insert at beginning
struct node *insertatbeg(struct node *head){
    struct node *temp;
    temp=(struct node*) malloc(sizeof(struct node));
    if(temp==NULL){
        printf("Memory not allocated");
    }
    else{
        printf("enter Data: ");
        scanf("%d",&temp->info);
        temp-> next=head;
        head=temp;
    }
    return head;
}
//display
void display(struct node*head){
    struct node *ptr=head;
    if(head==NULL)
    printf("Empty");
    else{
    while(ptr!=NULL){
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
    }
}
//Insert at last
struct node*insertatlast(struct node *head){
    struct node *temp,*ptr=head;
    if(head==NULL){
        head=(struct node*) malloc (sizeof(struct node));
        printf("data: ");
        scanf("%d",&head->info);
        head->next = NULL;
    }
    else{
        temp=(struct node*) malloc (sizeof(struct node));
        printf("data: ");
        scanf("%d",&temp->info);
        while(ptr->next!=NULL){
            ptr=ptr->next;
            }
        ptr->next=temp;
        temp->next=NULL;

    }
    return head;
}
int main(){
    int ch;
    struct node *head;
    head=NULL;
    do{
        printf("\nEnter what you wanna do:\n");
        printf("1. Display\t 2. Insert at beginning.\t 3.Insert at last.\t 4. \n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                display(head);
                break;   
            case 2: 
                head=insertatbeg(head);
                break;
            case 3:
                head= insertatlast(head);
                break;
            default: 
                printf("INVALID");
        }
    }while(1);    
    // struct node *head,*temp,*newnode;
    // head=NULL;
    // int ch;
    // while(ch){
    // newnode= (struct node *) malloc(sizeof(struct node));
    // if(newnode== NULL)
    // printf("Memory not allocated");
    // else {
    //     printf("Enter data: ");
    //     scanf("%d",&newnode->info);
    //     newnode->next=NULL;
    //     if(head== NULL)
    //     head=newnode=temp;
    //     else{
    //         temp->next=newnode;
    //         temp=newnode;
    //     }
    //     printf("Do you want to continue(0,1)?   ");
    //     scanf("%d",&ch);
    // }
    // }
    // if(ch==0){
    //         temp=head;
    //         while(temp!=NULL){
    //             printf("%d\n",temp->info);
    //         }
    //     }
}

