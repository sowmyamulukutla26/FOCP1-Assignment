#include <stdio.h>

int main() {
    int x, y;
    printf("Enter coordinates (x y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) printf("1st Quadrant\n");
    else if (x < 0 && y > 0) printf("2nd Quadrant\n");
    else if (x < 0 && y < 0) printf("3rd Quadrant\n");
    else if (x > 0 && y < 0) printf("4th Quadrant\n");
    else printf("On Axis\n");

    return 0;
}
