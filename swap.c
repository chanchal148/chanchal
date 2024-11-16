#include<stdio.h>
int main()
{
int x,y,z;
printf("enter the value of x\n");
scanf("%d", &x);
printf("enter the value of y\n");
scanf("%d", &y);
z=x;
x=y;
y=z;
printf("after swaping \n");
printf("x=%d \n", x);
printf("y=%d \n", y);
return 0;
}
