#include<stdio.h>
int main()
{
	int a;
	printf("%s","��������ݣ�"); 
	scanf("%d",&a);
	if(a%4==0&&a%100!=0||(a%400==0)){
		printf("Yes");
	}
	else{
		printf("No");
	}

	return 0;
}
