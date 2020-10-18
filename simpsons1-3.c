#include <stdio.h>
float y(float x){
	return 1/(1+x*x);
}
int main(){
	float a, b, h, sum;
	int i, n;
	printf("Enter a=x0 (lower limit), b=xn (upper limit), number of sub intervals\n");
	scanf("%f %f %d", &a, &b, &n);
	h=(b-a)/n;
	sum=y(a)+y(b)+4*y(a+h);
	for(i=3; i<=n; i=i+2){
		sum+=4*y(a+i*h)+2*y(a+(i-1)*h);
	}
	printf("\nValue of integral is %f\n", (h/3)*sum);
	return 0;
}