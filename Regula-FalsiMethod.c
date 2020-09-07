//Program to find acceptable roots, using regula-falsi or false postion method
#include <stdio.h>
#include<math.h>
#define tolerance 0.001		//Value of tolerance is defined

//Function defination for the mathematical function of x
double f(double x){
	double y;
	y=pow(x, 3)-5*x+3;
	return y;
}

//Function for the calculation of x3
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
	do{
		count++;
		oldX=x3;		//Couldn't find a better way to do this.
		x3=formula(a, b);
		if(f(x3)==0){
			printf("%lf = the required root!\n", x3);
			break;
		}
		else if(f(a)*f(x3)>0){
			a=x3;
		}
		else{
			b=x3;
		}
		printf("Root after iteration %d: %lf\n", count, x3);
	}while(fabs(oldX-x3)>=tolerance);
	printf("Final root after %d iterations: %.3lf\n", count, x3);
}