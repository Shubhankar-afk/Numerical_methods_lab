#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#define tolerance 0.0009
double f(double x){
	double y;
	y=pow(x, 3)-5*x+3;
	return y;
}
double formula(double a, double b){
	double y;
	y=(a*f(b)-b*f(a))/(f(b)-f(a));
	return y;
}
int main(){
	int i=0, count=0;
	double a, b, x3, oldX=0;
	printf("Enter the lower limit: ", a);
	scanf("%lf", &a);
	printf("Enter the upper limit: ", b);
	scanf("%lf", &b);
	//printf("f(x3) = %lf\n", f(x3));
	do{
		oldX=x3;
		x3=formula(a, b);
		if(x3==0){
			printf("%lf = the required root!\n", x3);
			break;
		}
		else if(f(a)*f(x3)>0){
			a=x3;
			printf("Root after iteration %d: %lf\n", count, x3);
		}
		else{
			b=x3;
			printf("Root after iteration %d: %lf\n", count, x3);
		}
		count++;
	}while(fabs(oldX-x3)>=tolerance);
	printf("Root after iteration %d: %lf\n", count, x3);
}