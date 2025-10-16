#include <stdio.h>

int main() {
    int arr[6];
    int i, last;
     for(i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }
    last = arr[5];
for(i = 5; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
printf("Array after shifting right:\n");
    for(i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
