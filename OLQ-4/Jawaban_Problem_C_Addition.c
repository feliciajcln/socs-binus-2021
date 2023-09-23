#include <stdio.h>

int main (){
	int a,b,c,d,e,f,x,y,z;
	scanf("%d + %d =", &a, &b); getchar();
	scanf("%d + %d =", &c, &d); getchar();
	scanf("%d + %d =", &e, &f); getchar();
	
	x=a+b;
	y=c+d;
	z=e+f;
	
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
	
	return(0);
}
