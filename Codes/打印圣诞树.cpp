//��ӡʥ����
#include<stdio.h>
int main()
{
	int level,i,j,k;
	printf("������ʥ�����Ĳ���:");
	scanf("%d",&level);
	for(i=1;i<=level;i++)  //��һ��forѭ��������ʥ�����Ľ��� 
	{
		for(j=1;j<=i+1;j++)   //�ڶ���forѭ��������ʥ�����ĵ�i�� 
		{
			for(k=1;k<=level-j+1;k++) //������forѭ���ǲ��еģ��ҹ��ɿɵù�˾ 
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
//���������������
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

