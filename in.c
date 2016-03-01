#include <stdio.h>

int main(void) {
	int a[]={1,2,3,4,5};
	int b,c,i,j;
	printf("enter the required number and position");
	scanf("%d%d",&b,&c);
	for(i=0;i<6;i++)
	{
	    if(i==c-1)
	    {
	       for(j=c-1;j<6;j++)
	        a[j+1]=a[j];
	    }
	        a[i]=b;
	    
	}
	printf("the new array is");
	for(i=0;i<6;i++)
	{
	  printf("%d",a[i]);  
	return 0;
}

