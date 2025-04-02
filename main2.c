int square(int a);
#include <stdio.h>
int main(){
	printf("enter a");
	int a=0;
	scanf("%d",&a);
	int res=square(a);
	printf("%d",a*a);
	return 0;
}

