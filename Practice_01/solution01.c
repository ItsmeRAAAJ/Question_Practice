#include <stdio.h>

int main() {
    // Calculate area of rectangle
    float len,wid;

    printf("Enter the Length of the Rectangle:");
    scanf("%f",&len);

    printf("Enter the Width of the Rectangle:");
    scanf("%f",&wid);

    printf("The Area of the Rectangle is : %f\n \n", len*wid);


    return 0;
}