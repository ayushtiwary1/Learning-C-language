#include <stdio.h>
int main() {
	float income;
	printf("Enter your income to calculate your tax:  ");
	scanf("%f" , &income);
	if (income < 250000) {
	printf("You don't come under tax slab of the government\n");
    }
	else if((income >=  250000)&&(income <  500000)) {
	printf("You have to pay the %f as your income tax.\n", 0.05*income);
    }
	else if ((income >=  500000)&&(income <  1000000)) {
	printf("You have to pay the %f as your income tax.\n", 0.2*income);
    }
	else if (income > 1000000 ) {
	printf("You have to pay the %f as your income tax.\n", 0.3*income);
    }
	return 0;
}