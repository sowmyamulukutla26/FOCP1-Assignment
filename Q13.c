#include <stdio.h>

int main() {
    int n, arr[20];
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == n - 1 || arr[i] >= arr[i + 1])) {
            printf("Peak Element: %d\n", arr[i]);
            break;
        }
    }
    return 0;
}
