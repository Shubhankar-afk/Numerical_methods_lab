#include <stdio.h>
#include <math.h>
#define f(y) (pow(x,3)+x*x-1);
int main(){
	double a, b, m=-1, x, y;
	int n=0, k, i;
	printf("Enter the value of a: ");
	scanf("%lf", &a);
	printf("Enter the value of b: ");
	scanf("%lf", &b);
	printf("How many iteration do you want?");
	scanf("%d", &k);
	printf("\nn		a 	b 	xn=a+b/2 	sign of (xn)\n");
	printf("-------------------------------------------------------\n");
	for (i=0; i<=k; i++){
		x=(a+b)/2;
		y=f(x);
		if (m==x)
			break;
		if (y>=0){
			printf("%d 	%.5lf 	%.5lf 	%.5lf 	+\n", i, a, b, x);
			b=x;
		}
		else if (y<0){
			printf("%d 	%.5lf 	%.5lf 	%.5lf 	-\n", i, a, b, x);
			a=x;
		}
		m=x;
	}
	printf("\nThe approximation of the roots si %.4lf which is upto 4D", b);
	return 0;
}