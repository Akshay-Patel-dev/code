// #include<stdio.h>
// int main()
// {
// 	// char  = 255;
//     char c;
//     scanf("%d",c);
// 	// c=c+10;
// 	printf("%d",c);
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	int i=1 ;
// 	int j=-4;
// 	printf("%u",i+j);
// return 0;
// }

#include <stdio.h>
#include <conio.h>
int main( )
{
	int s,t,a,b,m,n,apple[m],orange[n],ap=0,or=0,i,j,p[m],q[n];
	
	printf("Enter a number");
	scanf("%d",&s);
	printf("enter a number");
	scanf("%d",&t);
	printf("enter a number");
	scanf("%d",&a);
	printf("enter a number");
	scanf("%d",&b);
	printf("enter a number");
	scanf("%d",&m);
	printf("enter a number");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		printf("enter a no.");
		scanf("%d",&apple[i]);
		}
		for(i=0;i<m;i++)
		{
			printf("%d",apple[i]);
			}
			for(j=0;j<n;j++)
			{
			printf("enter a no.");
			scanf("%d",&orange[i]);
				}
		for(j=0;j<n;j++)
			{
				printf("%d",orange[i]);
				}
			for(i=0;i<m;i++)
				{
					p[i]=apple[i]+a;
					}
			for(j=0;j<n;j++)
					{
					q[i]=orange[i]+b;
						}
		for(i=0;i<m;i++)
					{
		if(s<=p[i]&&p[i]<=t)
						ap++;
						}
		for(j=0;j<=n;j++)
				{
					if(s<=q[i]&&q[i]<=t)
					or++;
					}
	printf("no. of apple is %d",ap);
	printf("no. of orange is %d",or);
			
					return 0;
					}