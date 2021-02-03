#include<iostream>
#define e 0.01
using namespace std;
double f(double x)
{
	return ;
}
void bisection(double a,double b,int n)
{
	double c,root;
	cout << "\n------------------------------------\n";
	cout << "\nIterations\ta\tb\root";
	cout << "\n------------------------------------\n";
	
	if(f(a)*f(b)<0)
	{
		for(int i=1;i<=n;i++)
		{
			c = (a+b)/2.0;
			root = f(c);
			cout << i << " " << a << " " << b << " " << c << " " << root;
			if(root>0)
			{
				b=c;
			}
		}
	}
	else
	a=c;
}
int main()
{
	int n;
	double a,b;
	cout << "Enter A-> ";
	cin >> a;
	cout << "Enter B-> ";
	cin >> b;
	cout << "Enter number of iterations -> ";
	cin >> n;
	bisection(a,b,n);
	return 0;
}
