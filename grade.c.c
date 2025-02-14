#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks");
    scanf("%d", &marks);

    if (marks>89)
    {
    printf("A");
    }
    if (90>marks && marks>69)
    {
    printf("B");
    }
    if (70>marks && marks>50)
    {
    printf("C");
    }
    if (marks==50)
    {
    printf("D");
    }


    if (marks<50)
    {
    printf("F");
    }
    return 0;
}