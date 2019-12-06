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

// 通过指针交换值
void swap(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// 任意类型指针参数
void half(void *num, char type) {
    switch (type) {
        case 'i':
            *(int *)num = *(int *)num / 2;
            break;
        case 'l':
            *(long *)num = *(long *)num / 2;
            break;
        case 'f':
            *(float *)num = *(float *)num / 2;
            break;
        default:
            printf("未知类型数据");
    }
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

    /*extern int add(int, int);   // 在主调方声明函数
    int result = add(5, 6); // 调用test.c中的函数f
    printf("%d\n", result);*/

    // 指针
    /*int a = 3;
    printf("%d\n", a);
    int *p = &a;    // 声明变量时，*表示该变量是一个指针变量，对变量使用&可以取到该变量的地址
    printf("%d\n", p);  // 输出变量a的地址值
    printf("%d\n", *p); // * 对指针变量使用时，意思是指向该指针变量存储的指针的地方，这里 *p和a的意义是一样的
    int *p2 = &p;   // 将p的地址值赋值给p2
    printf("%d\n", p2); // 输出p的地址值
    printf("%d\n", *p2);    // 输出p的值，即a的地址值
    int *p3 = &*p;  // 将p中存放的地址，即a的地址值赋值给p3
    printf("%d\n", p3); // 输出a的地址值
    printf("%d\n", *p3);    // 输出a的值*/

    /*int a = 10, b = 20;
    printf("%d---%d\n", a, b);  // 输出 10---20
    swap(&a, &b);
    printf("%d---%d\n", a, b);  // 输出 20---10*/

    int a = 10;
    long b = 20000;
    float c = 40.236;
    printf("%d\n", a);
    printf("%ld\n", b);
    printf("%f\n", c);
    half(&a, 'i');
    printf("%d\n", a);
    half(&b, 'l');
    printf("%ld\n", b);
    half(&c, 'f');
    printf("%f\n", c);
    return 0;
}

