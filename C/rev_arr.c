#include <stdio.h>

void pr_arr(int arr[], int size);
void rev_arr(int arr[], int start, int end);

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 29, 32, 99, 884};	
	int n = sizeof(arr) / sizeof(arr[0]);
	pr_arr(arr, n);
	rev_arr(arr, 0, n-1);
	pr_arr(arr, n);
	return 0;
}

void pr_arr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void rev_arr(int arr[], int start, int end)
{
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
