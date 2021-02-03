#include<stdio.h>
#include<math.h>
#define e 0.0001
#define f(x) x*x*x - 4*x + 1
int main()
{
	double a,b,c;
	double fa,fb,fc;
	int i=0;
	printf("A and B -> ");
	scanf("%lf %lf",&a,&b);
	printf("_______________________________________________________________\n");
	do{
		fa = f(a);
		fb = f(b);
		fc = f(c);
		c = (a*fb - b*fa)/(fb-fa);
		

		if(fa*fc<0)
		{
			b = c;
			fb = fc;
		}
		else
		{
			a = c;
			fa = fc;
		}
		i++;
		printf("Iterations = %d || Root = %.3lf || Value = %lf\n",i,c,fc);
	}while(fabs(fc)>e);
	printf("____________________________________________________________\n");
	return 0;
}
