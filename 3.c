#include<stdio.h>
void main()
{
 float a,b,c;
 printf("enter three numbers\n");
 scanf("%f%f%f",&a,&b,&c);
 if(a>b&&a>c)
printf("A is greater");
 else if(b>c)
printf("b is greater");
 else 
printf("c is greater");
 if(a==b==c)
printf("all are equal");
}