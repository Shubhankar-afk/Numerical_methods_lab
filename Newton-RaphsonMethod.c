#include<stdio.h>
#include <math.h>
double deriv();
double poly();
int main(){
	int degree[5], count, i;
	double x, coff[5];
	printf("Enter the degree of equation\n");
	scanf("%d", &count);
	for(i=0; i<=count; i++){
		printf("Enter the cofficient of x of degree %d: ", i);
		scanf("%lf", coff[i]);
	}
}