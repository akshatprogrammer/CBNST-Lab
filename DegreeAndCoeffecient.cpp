#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string eqq;
	getline(cin,eqq);
	int coef[]={0};
	int degree[]={0};
	int c=0,d=0;
	int n = eqq.length();
	char eq[n+1];
	strcpy(eq,eqq.c_str());
	for(int i=0;i<n;i++)
	{
		if((char)eqq[i]=="^")
		{
			degree[d]=eq[i+1];
			d++;
		}
		else if(eq[i]=="x" && eq[i+1]!="^")
		{
			degree[d] = 1;
			d++;
		}
		if(eq[i]=="x" && i==0)
		{
			coef[c] = 1;
			c++;
		}
		else if(eq[i]=="x")
		{
			coef[c] = eq[i-1];
			c++;
		}
	}
	for(int i=0;i<d;i++)
	{
		cout << degree[d] << " ";
	}
	cout << endl;
	for(int i=0;i<c;i++)
	{
		cout << coef[c] << " ";
	}
}
