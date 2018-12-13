/*
//18.12.09 경은하
#include <stdio.h>

double array_avg(int *list);
void print_array(int *list);

int main(void) {
	int list[] = { 10, 20, 30, 40, 50 };
	int *p;

	p = list;
	
	print_array(list);
	printf("배열 원소들의 평균  = %f \n", array_avg(list));

	return 0;
}

double array_avg(int *list) {
	int i;
	int sum = 0;
	double avg = 0.0;

	for (i = 0; i < 5; i++)
		sum += list[i];

	avg = sum / (double)i;

	return avg;
}

void print_array(int *list) {
	int i;
	
	printf("[ ");
	
	for (i = 0; i < 5; i++)
		printf("%d ", list[i]);

	printf("] \n");
}
*/