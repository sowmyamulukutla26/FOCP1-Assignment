#include <stdio.h>

int main() {
    int arr[10], n, count = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
        if (arr[i] == 99) count++;

    printf("Students with score 99: %d\n", count);
    return 0;
}
