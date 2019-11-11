#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <io.h>
#include "test.c"
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

char *Gets(int maxlength) {
    int i;
    static char *str;
    char c;
    str = (char *) malloc(sizeof(char) * maxlength);
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


void sort(int arr[]) {
    int len = sizeof(arr);
    printf("%d", len);
//    for (int i = 0; i < len; i++) {
//
//    }
}

void change_arr(int arr[]) {
    arr[0] = 5;
}

int main() {
/*    printf("Hello, World!\n");

    float r, area, circle;
    printf("\n 请输入数字：");
    scanf("%f", &r);
    circle = 2 * PI * r;
    area = PI * r * r;
    printf("\n 周长是：%f", circle);
    printf("\n 面积是：%f", area);

    int a,b;
    a = 123;
    b = 1;
    printf("%d \n", a+b);

    double num1, num2;
    num1 = 11111111111e2;
    num2 = num1 + 10;
    printf("%f,%f\n", num1, num2);

    char str[] = "1234.23";
    double num = str2num(str);
    printf("%f", num);

    putchar('a');
    putchar(getchar());
    putchar(getchar());
    putchar(getchar());
    putchar(getchar());
    putchar(getchar());
    putchar(getchar());
    puts("12313");

    int arr[5] = {1, 3, 5, 7, 9};
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
    sort(arr);

    char s1[] = "12";
    printf("%c\n", s1[0]);
    printf("%c\n", s1[1]);
    printf("%c\n", s1[2]);

    int src_arr[3] = {1, 3, 5};
    printf("%d\n", src_arr[0]);     // 输出1
    change_arr(src_arr);
    printf("%d\n", src_arr[0]);     // 输出5*/

    extern int add(int, int);   // 在主调方声明函数
    int result = add(5, 6); // 调用test.c中的函数
    printf("%d\n", result);
    return 0;
}

