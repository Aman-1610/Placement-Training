#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
        printf("The angles form a valid triangle.\n");
    else
        printf("The angles do NOT form a valid triangle.\n");

    return 0;
}
