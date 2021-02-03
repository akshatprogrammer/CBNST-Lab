#include<stdio.h>
#include<math.h>
#define e 0.01
int main();
double f(double x)
{
	return 2*exp(x) - 2*x -3;
}
void bisection(double a,double b,int n)
{
	double c,root;
	if(f(a)*f(b)>=0)
		main();
	
	if(f(a)*f(b)<0)
	{int i=1;
	printf("\n------------------------------------------------\n");
	printf("\nIterations\ta\tb\tc\tf(c)");
	printf("\n------------------------------------------------\n");
		do
		{
				
			c = (a+b)/2.0;
			root = f(c);
			printf("\n%d \t\t %.2lf \t %.2lf \t %.2lf \t %.2lf ",i,a,b,c,root);
		//	cout << endl << i << "\t\t" << a << "\t" << b << "\t" << c << "\t" << root;
			if(f(a)*root<0)
			{
				b=c;
			}
			else
				a=c;
			i++;
		}while(abs(root)>e);
	}
		printf("\n------------------------------------\n");
		printf("\t\tRoot -> %.2f",c);
	
}
int main()
{
	int n;
	double a,b;
	printf("Enter A- > ");
	scanf("%lf",&a);
	
	printf("Enter B- > ");
	scanf("%lf",&b);
	
	
	printf("Enter N- > ");
	scanf("%d",&n);
	bisection(a,b,n);
	return 0;
}
