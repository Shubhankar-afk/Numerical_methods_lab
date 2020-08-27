//Program to calculate root of quadratic equation
#include<stdio.h>
#include<math.h>
double f(double x){
	double y = (pow(x,3)-4*x-9);
	return y;
}
void main(){
	double x1, x2, y, x3, oldX3=0, count=0;
	int  i=1, test=0;
	printf("Enter the value of lower range: \n");
	scanf("%lf", &x1);
	printf("Enter the value of upper range: \n");
	scanf("%lf", &x2);
	while(1){
		x3=(x1+x2)/2;
		if(x3-oldX3<=0.0009){
			printf("%d. x = %lf\n", i, x3);
			i++;
			if(test==3){
				printf("Acceptable root of equation = %.3lf\n", x3);
				break;
			}
			test++;
		}
		if(f(x3)==0){
			printf("Root of equation = %lf\n", x3);
			break;
		}
		else if(f(x1)*f(x3)>0){
			x1=x3;
			printf("%d. x = %lf\n", i, x3);
			oldX3=x3;
			i++;
		}
		else{
			x2=x3;
			printf("%d. x = %lf\n", i, x3);
			oldX3=x3;
			i++;
		}	
	}
}