//Program to calculate root of quadratic equation, using bisection method
#include<stdio.h>
#include<math.h>
#define tolerance 0.001		//defined tolerance value

//function defination for the mathematical function of x
double f(double x){
	double y = (pow(x,3)-4*x-9);
	return y;
}

int main(){
	double x1, x2, x3, oldX3=0;
	int  i=1, test=0;
	label:	printf("Enter the value of lower range: \n");
	scanf("%lf", &x1);
	printf("Now f(x1) = %lf\n", f(x1));
	printf("Enter the value of upper range: \n");
	scanf("%lf", &x2);
	printf("Now f(x2) = %lf\n", f(x2));
	if(f(x1)*f(x2)>0){
		printf("Here f(x1)*f(x2)>0. Try a different range.\n");
		goto label;
	}
	while(1){
		x3=(x1+x2)/2;
		if(fabs(x3-oldX3)<=tolerance){
			if(test==3){
				printf("Acceptable root of equation = %.3lf\nIteration %d", x3, i-3);
				break;
			}
			test++;
		}
		if(f(x3)==0){
			printf("Root of equation = %lf\n", x3);
			break;
		}
		if(f(x1)*f(x3)>0){
			x1=x3;
		}
		else{
			x2=x3;
		}
		oldX3=x3;
		//printf("%d. x = %lf\n", i, x3);
		printf("%d. f(x%d) = %lf, x%d = %lf\n", i, i-1, f(x3), i-1, x3);
		i++;	
	}
	return 0;
}