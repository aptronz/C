#include<stdio.h>
void main()
{
    int E,M,P,C,S;
    printf("Enter the English number \n");
    scanf("%d",&E);
    
    printf("enter the physics number \n");
    scanf("%d",&P);
    
    printf("Enter the Chemistry number \n");
    scanf("%d",&C);
    
    printf("Enter the Maths number \n");
    scanf("%d",&M);
   
    printf("Enter the Sex education number \n");
    scanf("%d",&S);
   
    printf("The Percentage is %d\n",(E+P+M+C+S)/5 );

}