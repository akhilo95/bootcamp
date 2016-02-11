#include<stdio.h>
int add(int e,int f,int g)
{
e=e+f;
g=e+g;
}
int main()
{
	int a,b,c,d[10],i,sum=0,e,f,g;
printf("enter three numbers");
scanf("%d %d %d",&a&b&c);
a=e;
b=f;
c=g;
a=a+b;
c=a+c;
printf("Adding numbers using three variables %d",c);
printf("enter 3 numbers in a array");
for(i=0;i<3i++)
{
scanf("%d",&d[i]);
sum=sum+d[i];
}
printf("Adding variables using array:%d",sum);
printf("adding using function");
add(e,f,g);
printf("%d",g)


}