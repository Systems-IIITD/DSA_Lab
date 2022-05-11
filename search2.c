#include <stdlib.h>
#include <assert.h>

#define MAX_ELEM 100000
#define MAX_ITER 10

int lsearch2(int arr[], int val, int len) {
   if (len == 0)
      return -1;
   if (arr[len-1] == val)
      return len-1;
   return lsearch2(arr, val, len-1);
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
			idx = lsearch2(arr, arr[j], MAX_ELEM);
			assert(arr[j] == arr[idx]);
		}
	}

	return 0;
}
