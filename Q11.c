#include <stdio.h>

int main() {
    int arr[20], even[20], odd[20];
    int n, e = 0, o = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) even[e++] = arr[i];
        else odd[o++] = arr[i];
    }

    printf("Even: ");
    for (int i = 0; i < e; i++) printf("%d ", even[i]);
    printf("\nOdd: ");
    for (int i = 0; i < o; i++) printf("%d ", odd[i]);
    printf("\n");
    return 0;
}
