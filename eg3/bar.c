#include <stdio.h>

int find_min(int arr[], int n) {
	int min = arr[0];
	int i;
	for (i = 0; i < n; ++i) {
		if (arr[i] < min)
			min = arr[i];
	}
	
	return min;
}


