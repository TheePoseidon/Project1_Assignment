#include <stdio.h>

int factorial(int n);             
int sumArray(int arr[], int);
void printArray(int arr[], int size);

int main() {
	    int nums[] = {1, 2, 3, 4};
	        int size = sizeof(nums) / sizeof(nums[0]);

		    printArray(nums, size);
		        printf("Sum: %d\n", sumArray(nums, size));
			     printf("Factorial of 4: %d\n", factorial(4));

			         return 0;
}
int factorial(int n) {
	    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int sumArray(int arr[], int size) {
	    int sum = 0;
	        for (int i = 0; i < size; i++) sum += arr[i];
		    return sum;
}

void printArray(int arr[], int size) {
	    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
	        printf("\n");
}
