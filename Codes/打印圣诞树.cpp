//打印圣诞树
#include<stdio.h>
int main()
{
	int level,i,j,k;
	printf("请输入圣诞树的层数:");
	scanf("%d",&level);
	for(i=1;i<=level;i++)  //第一层for循环，控制圣诞树的节数 
	{
		for(j=1;j<=i+1;j++)   //第二层for循环，处理圣诞树的第i节 
		{
			for(k=1;k<=level-j+1;k++) //第三层for循环是并列的，找规律可得公司 
			{
				printf(" "); 
			 } 
			for(k=1;k<=2*j-1;k++)
			{
				printf("*");
			}
			printf("\n");
		} 
	}
//现在我们来打底座
	for(i=1;i<2;i++)
	{
		for(j=1;j<=level;j++)
		{
			printf(" ");
		}
	 	printf("|");
		printf("\n"); 
	} 
	for(i=1;i<=level;i++)
	{
		printf("=");
	}
	printf("V");
	for(i=1;i<=level;i++)
	{
		printf("=");
	}
return 0;
} 

