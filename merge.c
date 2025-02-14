#include <stdio.h>
void conquer(int arr[],int si, int mid,int ei){
    int merged[ei-si+1];
    int i1=si;
    int i2=mid+1;
    int i=0;
    while(i1<=mid&&i2<=ei){
        if(arr[i1]<=arr[i2]){
            merged[i]=arr[i1];
            i++; i1++;
        } else {
            merged[i]=arr[i2];
            i++;i2++;
        }
    }
    while(i2<=mid){
        merged[i]=arr[i1];
        i++; i1++;
    }
     while(i2<=ei){
        merged[i]=arr[i2];
        i++; i2++;
    }
    for (int x=0,j=si; x<i;x++,j++){
        arr[j]=merged[x];
    }
}
void divide(int arr[],int si,int ei){
    if(si>=ei)
        return;
    int mid=si+(ei+si)/2;
    divide(arr,si,mid);
    divide(arr,mid+1,ei);
    conquer(arr,si,mid,ei);
}
    int main(){
    int arr[]={2,4,12,9,5,3};
    int n=6;
    divide(arr,0,n-1);
    for (int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
// #include <stdio.h>

// void merge(int a[],int l,int mid,int h)
// {
//     int i , j , k;
//     i=l;
//     k=l;
//     j=mid+1;
//     int b[h+1];

//     while(i<=mid&&j<=h)
//     {
//         if(a[i]<a[j])
//         {
//             b[k++]=a[i++];
//         }
//         else
//         {
//             b[k++]=a[j++];
//         }
//     }
//     for ( ; i <=mid; i++)
//     {
//         b[k++]=a[i];
//     }
//     for ( ; j<=h; j++)
//     {
//         b[k++]=a[j];
//     }

//     for (int i = l; i <= h; i++)
//     {
//         a[i]=b[i];
//     } 
// }

// void mergesort(int a[],int l ,int h)
// {   int mid;
//     if(l<h)
//     {
//         mid =(l+h)/2;
//         mergesort(a,l,mid);
//         mergesort(a,mid+1,h);
//         merge(a,l,mid,h);
        
//     }
// }

// int main ()
// {
//     int a[10]={4,3,2,5,6,4,57,33,32,45};
//     for(int i =0;i<10;i++)
//     {
//         printf("%d ",a[i]);
//     }

//     mergesort(a,0,10);
//     printf("\nafter sorting\n");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ",a[i]);
//     }  
// }