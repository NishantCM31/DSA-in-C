#include<stdio.h>
void main()
{
    int first,last,middle,size,i,sElement,arr[100];
    printf("Enter the size of the an array:");
    scanf("%d",&size);
    printf("Enter %d integer values in Ascending order\n",size);
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("Enter values to be search;");
    scanf("%d",&sElement);
    first=0;
    last=size-1;
    middle=(first+last)/2;
    while (first<=last)
    {
        if (arr[middle]<sElement)
        {
            first=middle+1;
        }
        else if(arr[middle]==sElement)
        {
            printf("Element found at index %d\n",middle);
            break;
        }
        else
        last=middle-1;
        middle=(first+last)/2;
    }
    if (first>last)
    {
        printf("Element Not Found in the list");
    }
    
    
}
