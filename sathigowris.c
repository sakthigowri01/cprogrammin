#include <stdio.h>
#include<conio.h>
int main(void) {
	int n,i,j;
	scanf("%d",&n);
	if(n==1)
	{
		printf("enter valid input ");
		
	}
	else if(n==1)
	{
		printf("1 is neither prime nor composite");
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			if(n%i==0 & n!=i)
			{
				printf("not prime");
				break;
				
			}
			 if(n%i==0 & n==i)
			 {
			 	printf("prime");
			 }
			
			
		}
		
	
	}
	return 0;
}
