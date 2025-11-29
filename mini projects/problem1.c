#include <stdio.h>
int main() {
    int length, breadth, area , perimeter;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area of the rectangle: %d\n", area);
    printf("Perimeter of the rectangle: %d\n", perimeter);
    return 0;
}