#include <stdio.h>

int main() {
	double rate = 0.06;
	int duration;
	double principal_amount;
	double total_interest;
	printf("Enter duration in year: ");
	scanf("%d", &duration);
	printf("What is the principal amount of the loan? :");
	scanf("%lf", &principal_amount);
	total_interest = principal_amount * duration * rate;
	printf("Your total payable interest is %lf when principal_amount given as %lf and duration is %d", total_interest, principal_amount, duration);
	return 0;
}
