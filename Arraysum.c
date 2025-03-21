// WAP to print sum of all elements of an array
#include <stdio.h>
int  function(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
} 
int  main(){


 int arr[5] ={1,2,3,4,5};
int n =sizeof(arr)/sizeof(arr[0]);
 int result=function(arr,n);
 printf("Sum of all elements of an array is %d",result);
 return 0;
}
