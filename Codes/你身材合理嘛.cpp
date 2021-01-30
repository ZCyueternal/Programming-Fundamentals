#include<stdio.h>
#include<math.h>
int main()
{
	int h_cm,w_kg;
	double sta,real;
	printf("请输入身高(cm)和体重(kg)\ne ·g：170 70\n");
	scanf("%d%d",&h_cm,&w_kg);
	sta=(h_cm-100)*0.9;
	real=w_kg;
	if(fabs(sta-real)<sta*0.1)
	{
		printf("You are wan mei!\n");
	}
	else if(sta>real)
	{
		printf("You are tai shou le!\n");
	}
	else if(sta<real)
	{
		printf("You are tai pang le!\n");
	}
	return 0;
}
