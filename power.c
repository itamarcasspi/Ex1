#include "myMath.h"
#include <stdio.h>
double Power(double x, int y)
{
	if(x == 0)
	{
		return 0;
	}	
	else if(y== 0)
	{
		return 1;
	}	
	double z=x;
	for(int i = 1 ; i<y ; i++)
	{
		z = z*x;
	}	
	return z;
}

double Exponent(int x)
{
        float e = 2.7182;
        if(x<0)
        {
        	return 1/Power(e,x);
        }
	return Power(e,x);
}
