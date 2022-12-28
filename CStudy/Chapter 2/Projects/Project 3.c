#include <stdio.h>

int main(void)
{
    #define PI 3.14f
    float v;
    int r;
    printf("Enter the Sphere Radius: ");
    scanf("%d", &r);
    v = (4.0f / 3.0f) * PI * r * r * r;
    printf("The volume of the sphere is %.0f\n", v);
    return 0;
}