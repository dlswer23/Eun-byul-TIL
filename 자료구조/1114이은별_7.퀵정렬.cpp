#include <stdio.h>

 
//퀵정렬은 중김값을 기준으로 두 자료의 값을 비교 하는 것이다



void QuickSort(int[], int, int);
int main(void)
{
	int i;
	int data[8] = { 3,5,6,2,8,7,4,1 };
	data[i];
	printf("\n");

	QuickSort(data, 0, 7);

	printf("After Sort: ");
	for (i = 0; i < 8; i++) printf("\t%d", data[i]);
	printf("\n");

	return i;
}

void QuickSort(int data[], int start, int end)
{
	int tmp, pivot, left, right;
	pivot = end; left = start; right = end;

	if (start < end) {
		while (left < right) {
			while (data[left] < data[pivot] && left < right) left++;
			while (data[pivot] <= data[right] && left < right) right--;
			if (data[pivot] < data[left] && data[right] < data[pivot]) {
				tmp = data[left];
				data[left] = data[right];
				data[right] = tmp;
			}
		}

		if (data[left] > data[pivot]) {
			tmp = data[pivot];
			data[pivot] = data[left];
			data[left] = tmp;
		}

		QuickSort(data, start, right - 1);
		QuickSort(data, right + 1, end);
	}
}
