#include <stdio.h>

int main(void) {
	int n,sum=0;
	printf("enter a num\n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
	sum=sum+i;
	}
	printf("\n The sum is %d",sum);
	return 0;
}
