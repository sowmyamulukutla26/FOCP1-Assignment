#include <stdio.h>

int main() {
    int arr[20], n, pos;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter position to delete (0-based index): ");
    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

    printf("After deletion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
