#include<stdio.h>
int main()
{
 int i, search,flag=0,low,high,mid,s;
 printf("enter a number to search in array:\n");
 scanf("%d",&search);
 int b[12]={1,2,3,4,5,6,7,8,9,10,11,12};
  for (int i=0; i<10; i++)
 {
    if(b[i]==search)
    {
    	printf("given number found at location: %d\n",i);
    	flag = 0;
    	break;
    }
    else
    	{
    		flag = -1;
    	}
    
 	
 
 }
 
if(flag==-1)
 {
 	printf("given number is not present in the array\n");
 }
 
 
 low= 0, high = 11;
 
 mid = (low+high)/2;
 
 if(search>b[mid])
 {
 	printf("number is at right side\n");
 }
 else if(search<b[mid])
 {
 	printf("number is at left side\n");
 }
 else
 {
 	printf("number is located :%d\n", mid);
 }
 
    return 0;
 }
