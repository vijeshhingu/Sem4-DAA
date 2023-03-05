#include<stdio.h>
#include<math.h>
float factorial(int n)
{
	float ans=1;
	for(n;n>=1;n--)
	{
		ans=ans*n;
	}
	return ans;
}
void main()
{
	float a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
	int i;
	for(i=0;i<=100;i++)
	{
		a1=pow(3.0,i)/pow(2.0,i);
		a2=pow(i,3);
		a3=pow(log2(i),2);
		a4=log2(factorial(i));
		a5=pow(2,(pow(2,i)));
		a6=i;
		a7=log(log(i));
		a8=log2(i);
		a9=i*(pow(2,i));
		a10=pow(i,(log2(log2(i))));
		float fact=factorial(i);
		printf("\n%d\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f",i,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,fact);
	}
}