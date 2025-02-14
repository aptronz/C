#include <stdio.h>
int main()
{
    char F,M,gender;
    int  age;
    float fare;
    printf("Enter the gender: ");
    scanf("%c", &gender);
    printf("Enter the Age: ");
    scanf("%d", &age);
    printf("Enter the fare: ");
    scanf("%f", &fare);

    if(age>=6 && age<=11)
    {
        fare=fare*0.5;
        printf("Final fare is: %f",fare);
        
    }
    else if(gender==F && age>= 12 && age<=65){
        fare= fare*0.2;
        printf("final fare is: %f",fare);
        
    }
    else{
        fare = fare ;
        printf("Fare is:  %f",fare);
    }
    return 0;
}
