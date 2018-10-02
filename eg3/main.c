#include <stdio.h>
#include "foo.h"
#include "bar.h"

int main() {
	int arr[5] = {1, 2, 4, 7, 9};
	int max = find_max(arr, 5);
	int min = find_min(arr, 5);

	printf("max = %d, min = %d\n", max, min);

	return 0;
}
