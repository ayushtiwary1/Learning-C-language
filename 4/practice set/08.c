#include <stdio.h>
int main() {
	int i=1 , n , product=1;
	printf("Enter the number you want to know the factorial:  \n");
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
	{
	product= product*i;
	}
	printf("The factorial of %d is %d \n", n, product);

return 0;
}