#include <stdio.h>

int main(void) {
	int a[3],b[3],c[3];
	printf("enter input for a\n");
	scanf("%d",&a[3]);
	printf("enter input for b");
	scanf("%d",&b[3]);
	c[3]=sum(a[3],b[3]);
	
	printf("\nsum is %d",c[3]);
	return 0;
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	return (z);
}