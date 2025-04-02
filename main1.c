int sum(int a,int b);
#include <stdio.h>
int main(){
	printf("enter a and b");
	int a=0;
	scanf("%d",&a);
	int b=0;
	scanf("%d",&b);
	int res=sum(a,b);
	printf("%d",res);
	return 0;
}
