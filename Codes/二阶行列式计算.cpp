#include<stdio.h>
int main()
{
	int a[5][5];
	int i,j;
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&a[i][j]); 
		}
	}
	printf("%d",a[1][1]*a[2][2]-a[1][2]*a[2][1]);
return 0;
}
