#include <stdio.h>

int main()
{
	double degree[] = { -5.34, 3.67, 19.76, 28.76, 35.63 };

	int size = sizeof(degree) / sizeof(double);

	for (int i = 0; i < size; i++) {
		printf("%.2lf ", degree[i]);
	}
	puts(" ");

	return 0;
}
