#include<stdio.h>
#include "singly.h"
main()
{
	NODE *list=NULL,*temp;
	int choice,num,pos;
	do
	{
		printf("\n1.Create");
		printf("\n2.Insertbeg");
		printf("\n3.Insertend");
		printf("\n4.Insertbet");
		printf("\n5.Display");
		printf("\n6.Exit");
		printf("\nEnter your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				list=createlist(list);
				break;
			case 2:
				printf("\nEnter the number:");
				scanf("%d",&num);
				list=insertbeg(list,num);
				break;
			case 3:       printf("\nEnter the number:");
                                			scanf("%d",&num);
                             			   insertend(list,num);
                            			    break;
			case 4:
				printf("\nEnter the element & position:");
				scanf("%d%d",&num,&pos);
				insertbet(list,num,pos);
				display(list);
				break;
			case 5:
				display(list);
				break;
		
		}
	}while(choice!=6);
}