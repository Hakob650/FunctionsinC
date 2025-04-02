double CelstoFar(double Cels);
#include <stdio.h>
int main(){
	printf("enter temp in celsius");
	double  Cels=0;
	scanf("%lf",&Cels);
	double res=CelstoFar(Cels);
	printf("%.1f\n",res);
	return 0;
}
