//Program to find acceptable roots, using regula-falsi or false postion method
#include <stdio.h>
#include<math.h>
#define tolerance 0.001		//Value of tolerance is defined

//Function defination for the mathematical function of x
float f(float x){
	float y;
	y=pow(x, 3)-5*x+3;
	return y;
}

//Function for the calculation of x3
float formula(float a, float b){
	float y;
	y=(a*f(b)-b*f(a))/(f(b)-f(a));
	return y;
}

int main(){
	int i=0, count=0;
	float a, b, x3, oldX;
	printf("Enter the lower limit: ", a);
	scanf("%f", &a);
	printf("Enter the upper limit: ", b);
	scanf("%f", &b);
	do{
		count++;
		x3=formula(a, b);
		if(fabs(oldX-x3)<=tolerance){
			i++;
		}
		if(f(x3)==0){
			printf("%f = the required root!\n", x3);
			break;
		}
		else if(f(a)*f(x3)>0){
			a=x3;
		}
		else{
			b=x3;
		}
		oldX=x3;
		printf("Root after iteration %d: %f\n", count, x3);
	}while(i<2);
	printf("Final root after %d iterations: %.3f\n", count, x3);
}