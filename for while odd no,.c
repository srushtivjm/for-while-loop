#include<stdio.h>
main()
{
	int a,n;
	printf("Enter value for odd no=");
	scanf("%d",&n);
	
	{
		for(a=1,n;a<=n;a++)
		{
			if(a%2==1)
			{
				printf("%d\n",a);
			}
		}
	}
}
