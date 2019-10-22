#include <stdio.h>
#define PI 3.14

void main() {
//    printf("Hello, World!\n");
    float r, area, circle;
    printf("\n 请输入数字：");
    scanf("%f", &r);
    circle = 2 * PI * r;
    area = PI * r * r;
    printf("\n 周长是：%f", circle);
    printf("\n 面积是：%f", area);
}