#include<stdio.h>
int main()
{
 int x;
 printf("enter a x");
 scanf("%d",&x);
 if (x>0)
 {
 printf("The x is positive\n");
 }
 else 
 {
 printf("error\n");
 }
 /*
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
 */
 
 while (x>0)
 {
 int temp=x%10;
 int k=x/10;
 x=k;
 {printf("value of temp %d\n",temp);}
 }
 return 0;
 }
