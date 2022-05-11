#include <stdlib.h>
#include <assert.h>

#define MAX_ELEM 100000
#define MAX_ITER 10

int lsearch1(int arr[], int val, int len) {
   int i;
   for (i = len-1; i >= 0; i--) {
      if (arr[i] == val) {
         return i;
			}
   }
   return -1;
}

static void initialize_array(int arr[], int n)
{
	int i;

	for (i = 0; i < n; i++) {
		arr[i] = rand() % 10000;
	}
}

int main()
{
	int arr[MAX_ELEM];
	int i, j, idx;

	initialize_array(arr, MAX_ELEM);

	for (i = 0; i < MAX_ITER; i++) {
		for (j = 0; j < MAX_ELEM; j++) {
			idx = lsearch1(arr, arr[j], MAX_ELEM);
			assert(arr[j] == arr[idx]);
		}
	}

	return 0;
}
