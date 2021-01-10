#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "\n**************Upper Triangle***********\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i>j)
			cout << "0" << " "; 
			else
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\n**************Lower Triangle***********\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j+i>=n)
			cout << "0" << " "; 
			else
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
