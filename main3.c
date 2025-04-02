int checkpositive(int a);
#include <stdio.h>
int main(){
	int a=0;
	printf("enter a");
	scanf("%d",&a);
	int res=checkpositive(a);
        printf("%d",res);
	return 0;	
}
