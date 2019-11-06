#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <io.h>
#define PI 3.14

double str2num(char str[]) {
    double num = 0;
    int i = 0;
    double t = 10;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            if (t == 10) {
                num = num * t + str[i] - 48;
            } else {
                num += (str[i] - 48) * t;
                t *= 0.1;
            }
        }
        if (str[i] == '.') {
            t = 0.1;
        }
        i++;
    }
    if (str[0] == '-') {
        num = 0 - num;
    }
    return num;
}

char* Gets(int maxlength) {
    int i;
    static char* str;
    char c;
    str = (char*)malloc(sizeof(char)*maxlength);
    if (!str) {
        perror("memory allocation error!\n");
        return 0;
    } else {
        for (i = 0; i < maxlength; i++) {
            c = getchar();
            if (c == '\n') {
                break;
            }
            str[i] = c;
        }
        str[i] = '\0';
        return str;
    }
}

int main() {
//    printf("Hello, World!\n");

//    float r, area, circle;
//    printf("\n 请输入数字：");
//    scanf("%f", &r);
//    circle = 2 * PI * r;
//    area = PI * r * r;
//    printf("\n 周长是：%f", circle);
//    printf("\n 面积是：%f", area);

//    int a,b;
//    a = 123;
//    b = 1;
//    printf("%d \n", a+b);

//    double num1, num2;
//    num1 = 11111111111e2;
//    num2 = num1 + 10;
//    printf("%f,%f\n", num1, num2);

//    char str[] = "1234.23";
//    double num = str2num(str);
//    printf("%f", num);

//    putchar('a');
//    putchar(getchar());
//    putchar(getchar());
//    putchar(getchar());
//    putchar(getchar());
//    putchar(getchar());
//    putchar(getchar());
    puts("12313");
    return 0;
}

