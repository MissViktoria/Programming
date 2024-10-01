#include <stdio.h>

int main()
{
	int a;
	int n=2, flag=0;

	printf("Введите число а: ");
	scanf("%d", &a);

	while(a%n!=0){
	n++;
	if(n==a){flag=1; break;};
	}

	if(flag==1) puts("0");
	else puts("1");
}
