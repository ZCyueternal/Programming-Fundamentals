#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	time_t t;
	t=time(NULL);
	srand(t);
	printf("\n\t\t\tNow time is %s",ctime(&t));
	return 0;
}
