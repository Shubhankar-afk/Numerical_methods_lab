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
	for(i=1; i<n; i++){
		sum+=2*y(a+i*h);
	}
	printf("\nValue of integral is %f\n", (h/2)*sum);
	return 0;
}