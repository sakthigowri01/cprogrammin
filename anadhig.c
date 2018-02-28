#include <stdio.h>
#include<conio.h>
int main(void) {
	int a,b,c;
	scanf("%d %d",&a,&b);
	int c;
	c=a-b;
	if(c%1==0)
	{
		printf("even");
	}
	else
	printf("odd");
	return 0;
}
