#include <stdio.h>
#include <stdlib.h>

void binary_search(int arr[], int arr_size, int item){
	int first = 0;
	int last = arr_size-1;
	int middle = (first + last) / 2;
	while(last>=first){
		printf("\nFirst element..: %d, Middle element..: %d, Last element..: %d\n",arr[first], arr[middle],arr[last]);
		if(item>arr[middle]) first = middle + 1;
		else if(item == arr[middle]){
			printf("%d is in index %d.", item, middle);
            break;
		}
		else last = middle-1;
		middle = (first + last) /2;
	}
	if(first > last) printf("\nThere is no item.");
}

int main() {
	int arr1 [] = {3,6,10,15,22,30,32};
	int size = sizeof(arr1) / sizeof(int); // find array size
	binary_search(arr1, size, 22);
	binary_search(arr1, size, 37);
	return 0;
}
