#include<stdio.h>

int main(void)

{

int n,i,flag=0;

scanf("%d",&n);

for(i=4;i<=n/4;i++)

{

if(n%i==0)

{

flag=1;

break;

}

}

if(flag==0)

{

printf("\n no");

}

else

{

printf("\n yes");

}

return 0;

}
