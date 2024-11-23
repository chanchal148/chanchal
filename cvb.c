#include<stdio.h>
int main()
{
 int num;
 printf("enter a num");
 scanf("%d",&num);
 if (num>0)
 {
 printf("The num is positive\n");
 }
 else 
 {
 printf("error\n");
 }
 int x=num%10;
 {
 printf("unit's place num%d\n",x);
 }
 int b=num/10;
 int y=b%10;
 {
 printf("ten's place num%d\n",b);
 }
 int c=b/10;
 int z=c%10;
 {
 printf("hundred's place num%d\n",c);
 }
 int a=x+y+z;
 {
 printf("addition of num's is %d\n", a);
 }
 return 0;
 }
