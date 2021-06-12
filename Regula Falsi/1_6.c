#include<stdio.h>
#include<math.h>
#define e 0.0001
double f(double x)
{
	return sin(2*x)-exp(x-1);
}
void regulaFalsi(double a,double b)
{
	double c=a;
	if(f(a)*f(b)>0)
	{
		main();
	}
	do{
		if(f(a)*f(b)<=0)
		{
			c = (a*f(b) - b*f(a))/(f(b)-f(a));
			if(f(a)*f(c)<0)
				b = c;
			else
				a = c;
		}
	}while(abs(f(c))>e);
	printf("Root -> %.4lf",c);
}
int main()
{
	double a,b;
	printf("A -> ");
	scanf("%lf",&a);
	
	printf("B -> ");
	scanf("%lf",&b);
	regulaFalsi(a,b);
	return 0;
}
