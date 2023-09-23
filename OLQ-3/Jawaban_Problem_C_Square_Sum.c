#include <stdio.h>

int main (){
	double a,b,c,d,e,f,g,h,i,j,k,l,x,y,z;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	scanf("%lf %lf %lf %lf", &e, &f, &g, &h);
	scanf("%lf %lf %lf %lf", &i, &j, &k, &l);
	
	x=((a/1)*2)+((b/2)*4)+((c/3)*6)+((d/4)*4);
	y=((e/1)*2)+((f/2)*4)+((g/3)*6)+((h/4)*4);
	z=((i/1)*2)+((j/2)*4)+((k/3)*6)+((l/4)*4);
	
	printf("%.2lf\n", x);
	printf("%.2lf\n", y);
	printf("%.2lf\n", z);
	
	return(0);
}
