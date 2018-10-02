#include "tool.h"
#include <stdio.h>

int main() {
	int arr[5] = {1, 9, 22, 15, 4};
	

	int max = find_max(arr, 5);
	printf("max = %d\n", max);

	return 0;
}
