#include <stdio.h>

int main (){
	long a,b,c,d,e,f,g,h,i,j,k,l,x,y,z;
	scanf("(%ld+%ld)x(%ld-%ld)", &a, &b, &c, &d); getchar();
	scanf("(%ld+%ld)x(%ld-%ld)", &e, &f, &g, &h); getchar();
	scanf("(%ld+%ld)x(%ld-%ld)", &i, &j, &k, &l); getchar();
	
	x=(a+b)*(c-d);
	y=(e+f)*(g-h);
	z=(i+j)*(k-l);
	
	printf("%ld %ld %ld\n", x, y, z);
	
	return(0);
}
