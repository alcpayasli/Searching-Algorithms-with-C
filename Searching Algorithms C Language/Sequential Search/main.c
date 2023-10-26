#include <stdio.h>
#include <stdlib.h>

void sequential_search(int arr[], int arr_size, int item){
	int i;
	for(i = 0; i<arr_size; i++){
		if(item == arr[i]){
			printf("%d is in index %d.", item, i);
			break;
		}
	}
	if (i == arr_size) printf("\nThere is no item.");
}


int main() {
	// Example
	int arr1 [] = {2,15,12,0,4,8,90};
	int size = sizeof(arr1) / sizeof(int); // find array size
	sequential_search(arr1, size, 0);
	sequential_search(arr1, size, 76);
	return 0;
}
