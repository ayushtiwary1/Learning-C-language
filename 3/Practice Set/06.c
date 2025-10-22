#include <stdio.h>
int main() {
	int a, b, c, d;
	printf("Enter the first number:  ");
	scanf("%d",&a);
	printf("Enter the second number:  ");
	scanf("%d",&b);
	printf("Enter the third number:   ");
	scanf("%d" ,&c);
	printf("Enter the fourth number:  ");
	scanf("%d" ,&d);

	if ((a>b)&&(a>c)&&(a>d)) {
	printf("The number %d is largest of all." , a);
	}
	else if ((b>a)&&(b>c)&&(b>d)) {
	printf("The number %d is largest of all." , b);
	}
	else if ((c>b)&&(c>a)&&(c>d)) {
	printf("The number %d is largest of all." , c);
	}
	else if ((d>b)&&(d>a)&&(d>c)) {
	printf("The number %d is largest of all." , d);
	}
	else {
	printf("you put a wrong input");
	}
	return 0;
}