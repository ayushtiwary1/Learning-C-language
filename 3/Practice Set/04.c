#include <stdio.h>
int main() {
	int year;
	printf("Enter the year you want to know if it's a leap year or not:  ");
	scanf("%d" , &year);
	if ( year%4==0 ) {
	printf("Yay, This is a leap year");
	}
	else {
	printf ("Oh, This is not a leap year");
	}

	return 0;
}