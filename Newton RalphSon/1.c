#include<stdio.h>
#include<math.h>
#include"input.h"

int main()
{
	double a; // initial guess
	double c; // root
	double e;
	int n; // max iterations
	int i=1; // counter
	double fa,fc,ga;
	printf("Enter the equation f(x) and the value at which you need to find the value : ");
	char eq[100];
	float a;
	scanf("%s%f",eq,&a);
//	printf("Enter Inital Guess -> ");
//	scanf("%lf",&a);
	printf("Enter Tolerable Error -> ");
	scanf("%lf",&e);
	e=pow(10,-e);
	printf("Enter N -> ");
	scanf("%d",&n);
	printf("-------------------------------------------------------\n");
	do{
		ga=g(a);
		fa=f(a);
		if(ga==0.0)
		{
			printf("Mathematical Error\n");
			printf("-------------------------------------------------------\n");
			exit(0);
		}
		c = a - fa/ga;
		fc=f(eq,c);
		printf("Iteration %d : \t %lf\tf(x) -> %lf\n",i,c,fc);
		a=c;
		i++;
		if(i>n)
		{
			printf("Not Convergent\n");
			printf("-------------------------------------------------------\n");
			exit(0);
		}
	//	fc=f(c);
	}while(fabs(fc)>e);
	printf("-------------------------------------------------------\n");
	printf("-------------------------------------------------------");
	printf("\n\t\tRoot -> %f\n",c);
	printf("-------------------------------------------------------\n");
}
