#include<stdio.h>
int main()
{
int i,n,a[50];
printf("\n To read and display element of array");
printf("\n enter the size of array:");
scanf("%d",&n);
printf("enter the element:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n elements of array are:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return(0);
}   
