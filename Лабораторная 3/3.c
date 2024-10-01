#include <stdio.h>

int main()
{
	int a;
	int n;

	printf("Введите число а: ");
	scanf("%d", &a);

	for(n=2; n<a && a%n!=0; n++);
	if (n==a) puts("1");
	else puts("0");
}
