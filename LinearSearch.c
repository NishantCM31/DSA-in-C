#include<stdio.h>
void linear_search(int[],int,int);
void main()
{
    int a[10],x,n,i;
    printf("\n Enter the size of array:");
    scanf("%d", &n);
    printf("\n Enter the elements of array:");
    for (i=0;i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the element which u want to searched:");
    scanf("%d", &x);
    linear_search(a,n,x);
}
void linear_search(int a[10],int n,int x)
{
    int i,flag;
    for (i=0;i<n; i++)
    {
        if (a[i]==x)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==1)
    {
        printf("%d is found at position %d",a[i],i+1);
    }
    else
    printf("%d is not found",x);
    
}