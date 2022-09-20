/*
 * Testing type cast
 * (TestCastingAverage.c)
 */
#include <stdio.h>

int main() {
	int sum = 0;		// Sum in "int"
	double average;	// Average in "double"

	// Compute the sum from 1 to 100 (in "int")
	int number = 1;
	while (number <= 100) {
		sum = sum + number;
		++number;
	}

	printf("The sum is %d.\n", sum);

	// Compute the average (in "double")
	average = sum / 100;
	printf("Average 1 is %lf.\n", average);	// Presents an incorrect int value
	average = (double)sum / 100;
	printf("Average 2 is %lf.\n", average);	// Presents a correct double value
	average = sum / 100.0;
	printf("Average 3 is %lf.\n", average);	// Presents a correct double value
	average = (double)(sum / 100);
	printf("Average 4 is %lf.\n", average);	// Presents an incorrect int value

	return 0;
}
