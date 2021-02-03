#include<iostream>
#include<cmath>
#define e 0.01
using namespace std;
double eq = 0;
double input()
{
	double x,c,p;
	cin >> c;
	cin >> p;
	eq += c*(pow(x,p));
//	return eq;
}
double function(double x)
{
	return eq;
}
void bisection(double a,double b)
{
	if(function(a)*function(b) >= 0)
	{
		printf("wrong guess\n");
		return;
	}
	double c = a;
	do{
		c = (a+b)/2;
		if(function(a)*function(c) < 0)
			{
				//printf("Root -> %lf\n",c);
				b =c;
			}
		else
			{
				//printf("Root -> %lf\n",c);
				a =c;
			}
	}while(abs(function(c))>e);
	printf("\n--------------------------------\n");
	printf("Root -> %.2lf\n",c);
}
int main()
{
	int ch;
	do{
		cout << "Input -> ";
		input();
		cout << "Input more? 1";
		cin >> ch;
	}while(ch);
	cout << endl << eq << endl;
	double a,b;
	printf("Enter your assumptions : ");
	scanf("%lf %lf",&a,&b);
	bisection(a,b);
	return 0;
}
