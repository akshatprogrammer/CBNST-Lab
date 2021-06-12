#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x - 4*x + 1
int main()
{
	float a,b; // intial guess
	float fa,fb; // value at a b resp
	float c,fc; //root and value
	scanf("%f%f",&a,&b);
	int i=0;
	do{
		fa=f(a);
		fb=f(b);
		c = (a*fb-b*fa)/(fb-fa);
		fc = f(c);
		if(fa*fc<0)
		{
			b=c;
			//fb=fc;
		}
		else{
			a=c;
			//fa=fc;
		}
		i++;
		printf("ite - > %d\tRoot -> %.3f\n",i,c);
	}while(fabs(fc)>e);
}
