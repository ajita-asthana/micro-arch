#include <stdio.h>

//Function to remove duplicates from an array
int removeDuplicates(int arr[], int n) {
	if(n==0 || n==1) {
		return n;
	}

	int temp[n];
	int j=0;

	for(int i = 0; i< n-1; i++) {
		if(arr[i] != arr[i+1]) {
			temp[j++] = arr[i];
		}
	}

	temp[j++] = arr[n-1];;

	for(int i=0; i<j; i++) {
		arr[i] = temp[i];
	}

	return j;
}
int main() {
	int arr[] = {1,2,2,3,3,3,4,5,6,6,7,8};
	int n = sizeof(arr) / sizeof(arr[0]);

	//Sort the array if not already sorted
	// This step is necessary for this specific method to work
	for(int i=0; i<n; i++) {
		for(int j=0; j<n-i-1; j++) {
			if(arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	n = removeDuplicates(arr, n);

	printf("Array after removing duplicates: \n");
	for(int i=0; i<n; i++) {
		printf("%d", arr[i]);
	}
}
