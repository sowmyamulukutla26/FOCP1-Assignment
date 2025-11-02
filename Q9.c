#include <stdio.h>

int main() {
    int arr[10], n, found = -1;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
        if (arr[i] == 99) { found = i; break; }

    if (found != -1) printf("First occurrence at index %d\n", found);
    else printf("99 not found\n");
    return 0;
}
