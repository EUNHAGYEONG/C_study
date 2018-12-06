/*
//18.11.28 경은하
#include <stdio.h>
#define SIZE 5

double get_array_avg(int values[], int n);
void print_array(int values[], int n);

int main(void) {
	int array[SIZE] = { 10, 20, 30, 40, 50 };
	double avg;

	print_array(array, SIZE);
	avg = get_array_avg(array, SIZE);
	printf("배열 원소들의 평균 = %d \n", avg);
	
	return 0;
}

double get_array_avg(int values[], int n) {
	int i;
	int sum = 0;
	double avg;
	for (i = 0; i < n; i++) {
		sum += values[i];
	}
	return sum / n;
}

void print_array(int values[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", values[i]);
	}
	printf("\n");
}
*/