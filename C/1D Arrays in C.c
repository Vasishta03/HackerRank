#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d", &size);

    int* arr = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}
