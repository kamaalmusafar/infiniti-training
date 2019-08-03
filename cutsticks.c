#include<stdio.h>
main()
{
	int n,i,min,count,a[10];
	printf("enter no of values");
	scanf("%d",&n);
	printf("enter the values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	do{
		min=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]<min)
			{
				if(a[i]!=0)
				{
					min=a[i];
				}
			}
		}
	
			count=0;
			for(i=0;i<n;i++)
			{
				printf("%d ",a[i]);
				if(a[i]!=0)
				{
				
					a[i]=a[i]-min;
					count++;
				}
			}
			printf("no o sticks %d\n",count);
			getch();
		}while(count>1);
			
		getch();
}
