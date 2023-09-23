#include <stdio.h>

int main (){
	long int X;
	double Y,a,b,c;
	
	scanf("%ld %lf", &X, &Y);
	a=X+(X*(Y/100));
	b=a+(a*(Y/100));
	c=b+(b*(Y/100));
	printf("%.2lf\n", c);
	
	return(0);	
}
