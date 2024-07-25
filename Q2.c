#include<stdio.h>
int main()
{
    printf("Enter the length of array: ");
    int n;
    scanf("%d",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",i);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=i;
    }
    float avg=sum/n;
    printf("The average of given array is: ",avg);
    return 0;
}
