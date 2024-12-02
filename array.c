#include<stdio.h>
int main()
{
 int i, search,flag=0;
 printf("enter a number to search in array:\n");
 scanf("%d",&search);
 int b[7]={1,2,3,4,5,6,7};
  for (int i=0; i<7; i++)
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

    return 0;
 }
