double doubleSum(double a,double b);
#include <stdio.h>
int main(){
	printf("enter a and b");
	double  a=0;
	scanf(" %lf",&a);
	double  b=0;
	scanf("%lf",&b);
	double res=doubleSum(a,b);
	printf("%.1f\n",res);
	return 0;
}
