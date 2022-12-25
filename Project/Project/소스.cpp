#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int size, x, temp;
	scanf("%d%d", &size, &x);
	for (int i = 1; i <= size; i++) {
		scanf("%d", &temp);
		if (temp < x)
			printf("%d ", temp);
	}
	return 0;
}