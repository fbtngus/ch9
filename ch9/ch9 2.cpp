#include <stdio.h>

int main()
{
	int data[] = { 3,21,35,57,24,82,8 };

	for (int i = 0; i < sizeof(data) / sizeof(int); i++) {
		*(data + i) += 10;
		printf("%d ", *(data + i));
	}

	puts(" ");

	return 0;
}