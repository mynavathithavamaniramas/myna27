#include<stdio.h>
int main()
{
int a,b,Mul;
printf("Enter two positive integers:\n");
scanf("%d%d",&a,&b);
Mul= (a>b) ?a:b;
while(1)
{
if(Mul%a==0 && Mul%b==0)
{
printf("The LCM of %d and %d is %d",a,b,Mul);
break;
}
++Mul;
}
return 0;
}
