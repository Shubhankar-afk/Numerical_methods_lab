//Program to calculate acceptable root using Newton-Raphson method
#include<stdio.h>
#include <math.h>
#define tolarance 0.001

double f(double x){
	double y;
	y=pow(x, 3)-4*x-9;
	return y;
}
double fd(double x){
	double y;
	y=3*pow(x, 2)-4;
	return y;
}

int main(){
	int count=1, i=0;
	double x3, a, b, newX, oldX;
	label:	printf("Enter the lower limit: ");
	scanf("%lf", &a);
	printf("Now f(a) = %lf\n", f(a));
	printf("Enter the upper limit: ");
	scanf("%lf", &b);
	printf("Now f(b) = %lf\n", f(b));
	if(f(a)*f(b)>0){
		printf("Here f(a)*f(b)>0. Try a different range.\n");
		goto label;
	}
	if(fabs(f(a))<=fabs(f(b))){
		x3=a;
		printf("x0 = %lf\n", a);
	}
	else{
		x3=b;
		printf("x0 = %lf\n", b);
	}
	do{
		newX=x3-(f(x3)/fd(x3));
		printf("%d. f(x%d) = %lf, fd(x%d) = %.5lf, x%d = %lf\n", count-1, count-1, f(x3), count-1, fd(x3), count, newX);
		if(fabs(newX-x3)<=tolarance)
			i++;
		count++;
		x3=newX;
	}while(i<1);
	printf("The acceptable value of root = %.4lf, after %d iterations.\n", newX, count);
	return 0;
}