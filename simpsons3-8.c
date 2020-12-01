//program of Simpson's 3/8 rule
#include<stdio.h>
float y(float x)
{
return 1/(1+x*x);
}

int main()
{
float a, b, h, sum;
int i, n, j;
sum = 0;
printf("Enter a=x0 (lower limit), b=xn (upper limit), number of subintervals\n");
scanf("%f%f%d", &a, &b, &n);
h=(b-a)/n;
sum = y(a)+y(b);
for(i=1; i<n; i++)
{
if(i%3 == 0){
sum = sum + 2*y(a+i*h);
}
else{
sum = sum + 3*y(a+i*h);
}
}
printf("\nValue of intergal is %f\n", (3*h/8)*sum);
return 0;
}
