#include<stdio.h>

void main()
{
 char c;
 printf("\nenter a single element");
 scanf("%c",&c);
 if((c>=97&&c<=122)||(c>='A'&&c<='Z'))

 /*instead of lowercase a and z their corresponding ascii values are given respectively*/
 printf("it is alphabet");
 else
 printf("not an alphabet");
}