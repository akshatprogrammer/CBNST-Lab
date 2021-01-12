#include<stdio.h>
#include<math.h>
#define Pi 3.141592
int main()
{
	float degree,radian;
	printf("\t\t\t\t****TRIGONOMETRY FUNCTIONS*****\n");
	printf("Enter the degree in radian - > ");
	scanf("%f",&degree);
	radian = degree*(Pi/180.0);
	printf("Sin %.1f = %.2f\n",degree,sin(radian));
	printf("Cos %.1f = %.2f\n",degree,cos(radian));
	printf("Tan %.1f = %.2f\n",degree,sin(radian)/cos(radian)*1.0);
	printf("Cot %.1f = %.2f\n",degree,cos(radian)*1.0/sin(radian));
	printf("Cosec %.1f = %.2f\n",degree,1.0/sin(radian));
	printf("Sec %.1f = %.2f\n",degree,1.0/cos(radian));
	
	printf("\t\t\t\t****Logarithmic Funcions****\n");
	float val,result;
	printf("Enter X in log10(x) -> ");
	scanf("%f",&val);
	result = log10(val);
	printf("log10(%.1f) -> %.2f\n",val,result);
	printf("Enter X in ln(x) -> ");
	scanf("%f",&val);
	result = log(val);
	printf("ln(%.1f) -> %.2f\n",val,result);
	printf("Enter X in log2(x) -> ");
	scanf("%f",&val);
	result = log2(val);
	printf("log2(%.1f) -> %.2f\n",val,result);
	
	printf("\t\t\t\t****Exponential Funcion****\n");
	float x;
	printf("Enter x -> ");
	scanf("%f",&x);
	printf("e^%.1f -> %.2f",x,exp(x));
}
