#include <stdio.h>
void bubbleSort(int arr[], int n) {
  int i, j, temp;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
void printArray(int arr[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
int main() {
  int array[] = {11, 99, 22, 44, 77, 33, 55, 88, 66};
  int n = sizeof(array) / sizeof(array[0]);
 
  printf("Unsorted array: \n");
  printArray(array, n);

  bubbleSort(array, n);

  printf("Sorted array: \n");
  printArray(array, n);

  return 0;
}
