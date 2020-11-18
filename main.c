#include <stdio.h>
#include "myMath.h"

int main()
{
	float x;
	printf("Please enter a real number \n");
	scanf("%f",&x);
	float i,ii,iii;
	i = sub(add(Exponent(x),Power(x,3)),2);
	ii = add(mul(x,3),mul(Power(x,2),2));
	iii = sub(div(mul(Power(x,3),4),5),mul(x,2));
	
	printf("  i.The value of f(x)=e^x+𝑥^3−2 at point %f is %0.4f\n",x,i);
	printf(" ii.The value of f(x)=3x+2X^2 at point %f is %0.4f\n",x,ii);
	printf("iii.The value of f(x)=(4x^3)/5−2X at point %f is %0.4f\n",x,iii);
	return 0;
}
