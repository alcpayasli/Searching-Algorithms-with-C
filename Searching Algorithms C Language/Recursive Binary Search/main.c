#include <stdio.h>
#include <stdlib.h>

void recursive_binary_search( int arr[], int arr_size, int item, int first, int last){
	int i, middle;
	middle = (first + last) / 2;
	if(first > last) {
		printf("\nThere is no item.\n");
		return;
	}
	if(item>arr[middle]){
		first = middle + 1;
		recursive_binary_search(arr, arr_size, item, first, last);
	}
	else if (item == arr[middle]) printf("\n%d in %d index.\n", item, middle);
	else {
		last = middle-1;
		recursive_binary_search(arr, arr_size, item, first, last);
	}
	
}
int main() {
	int arr1[] = {3,12,16,20,30,45,50};
	int size = sizeof(arr1) / sizeof(int);
	int last = size-1;
	recursive_binary_search(arr1, size, 51, 0, last);
	return 0;
}
