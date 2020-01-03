#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <io.h>
#include "test.c"
#include "file1.c"
#include "file2.c"

#define PI 3.14
#define AREA(r) (PI * (r) * (r))
// 使用 #undef 终止宏定义，在终止命令之后的所有代码均不可使用之前的宏定义
// #undef PI
#define TRUE_FLAG 1

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
            *(int *) num = *(int *) num / 2;
            break;
        case 'l':
            *(long *) num = *(long *) num / 2;
            break;
        case 'f':
            *(float *) num = *(float *) num / 2;
            break;
        default:
            printf("未知类型数据");
    }
}

// 翻转数组
void reverse(int arr[], int n) {
    int j, temp;
    for (int i = 0; i < (n - 1) / 2; i++) {
        j = n - 1 - i;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

// 指针函数
int * getP() {
    static str = "this is a string";
    return &str;
}

// 函数指针
int (*func)();

int sum(a, b) {
    return a + b;
}

struct student {
    float score;
    char name[20];
    char sex;
};

struct s {

    char c;
    int i;
    float f;
    double d;

};

union u {
    char c;
    int i;
    float f;
    double d;
};

//struct  s {
//    int i;
//    int j;
//};

// 定义枚举
enum Direction {
    up = 3, down = 1, left, right
};

enum Color {
    red, yellow, blue, white, black
};

// 定义一个自定义的复数类型
typedef struct {
    int real, im;
} complex;

// 计算复数乘积的函数
complex mul(complex c1, complex c2) {
    complex c;
    c.real = c1.real * c2.real - c1.im * c2.im;
    c.im = c1.real * c2.im + c1.im * c2.real;
    return c;
}

typedef struct node {
    int value;
    struct node *next;
} LinkList;

struct bitArea {
    unsigned a: 1;
    unsigned b: 3;
    unsigned c: 4;
};

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

    /*int a = 10;
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
    printf("%f\n", c);*/

    /*int a[3] = {3, 6, 9,}, *p;
    p = a;
    printf("a[0]的地址：%X, a的值：%X, p的值：%X\n", &a[0], a, p);  // 输出结果三个值是一样的
    printf("*a的值：%d，*p的值：%d\n", *a, *p);  // 输出结果两个值是一样的
    for (int i = 0; i < 3; i++) {
        printf("数组a的第%d个元素的地址是：%X\n", i, (p + i));  // C语言中规定，数组的指针p如果指向第i个元素，那么p+1就指向第i+1个元素
        printf("数组a的第%d个元素的值是：%X\n", i, *(p + i));
    }
    for (int i = 0; i < 3; i++,p++) {
        printf("数组a的第%d个元素的地址是：%X\n", i, p);  // C语言中规定，数组的指针p如果指向第i个元素，那么p+1就指向第i+1个元素
        printf("数组a的第%d个元素的值是：%X\n", i, *p);
    }*/

    /*int arr[] = {4,7,8,1,3};
    for (int i = 0; i < 5; i++) {
        printf("%d ",arr[i]);
    }
    reverse(arr, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ",arr[i]);
    }*/

    // 指针访问多维数组，以二维数组为例
    /*int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // 下面输出的都是a[0][0]的地址值
    printf("a=%d\n", a);
    printf("*a=%d\n", *a);
    printf("a[0]=%d\n", a[0]);
    printf("&a[0]=%d\n", &a[0]);
    printf("&a[0][0]=%d\n", &a[0][0]);

    // 下面输出的都是a[1][0]的地址值
    printf("a+1=%d\n", a+1);
    printf("*（a+1）=%d\n", *(a+1));
    printf("a[1]=%d\n", a[1]);
    printf("&a[1]=%d\n", &a[1]);
    printf("&a[1][0]=%d\n", &a[1][0]);

    // 使用指针遍历多维数组
    int *p;
    for (p = *a; p < *a + 3 * 4; p++) {
        printf("%d\n", *p);
    }*/

    // 获取指定位置的值
    /*int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int i = 2;
    int j = 2;
    int *p = a;
    printf("%d\n", *(p + i*4 + j));
    int (*q)[4] = a;    // 将指针的步长设置为第二维的长度，就可以每次加1都跳到第二维的首地址
    printf("%d", *(q + 1)[0]);*/

    /*printf("%d", getP());
    func = sum;
    printf("%d", (*func)(3, 7));*/

    // 操作结构体
    /*struct student stu1;
    stu1.score = 85.0;
    printf("%.2f", stu1.score);*/

    // 定义结构体数组
    /*struct student boy_student[] = {
            {80, "张三", '1'},
            {85, "李四", '0'},
            {90, "王五", '1'}
    };
    for (int i = 0; i < 3; i++) {
        char *sex;
        if (boy_student[i].sex == '1') {
            sex = "男";
        } else if (boy_student[i].sex == '0') {
            sex = "女";
        }
        printf("%s是一个%s孩子，这次的考试成绩是%.2f\n", boy_student[i].name, sex, boy_student[i].score);
    }*/

    // 指向结构体的指针
    /*struct student s = {60, "赵六", '1'};
    struct student *p = &s;
    printf("%s的考试成绩是%.2f\n", (*p).name, (*p).score);*/

    /*printf("%d,%d,%d,%d\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double));
    printf("%d,%d", sizeof(struct s), sizeof(union u));*/

    // 引用枚举
    /*printf("%d,%d,%d",up, left, right);

    enum Color a,b,c;
    int count = 0;
    for (a = red;a <= black;a++) {
        for (b = red; b <= black;b++) {
            if (a != b) {
                for (c = red; c <= black;c++) {
                    if (b != c && a != c) {
                        count++;
                        printf("%d,%d,%d\n",a,b,c);
                    }
                }
            }
        }
    }
    printf("一共有%d种结果",count);*/

    // 实例化两个复数
    /*complex a = {3,4};
    complex b = {5,6};
    complex res = mul(a, b);
    printf("a * b 的结果是：%d + %di", res.real, res.im);*/

    // 动态内存分配
    /*void *p = malloc(10 * sizeof(int));
    if (p == NULL) {
        printf("分配内存失败");
        exit(1);
    }
    int count, *array=(int *)p;
    // 这里故意在数组中赋值个数超过10个，发现并没有报错，说明该内存区域是动态的
    for (count = 0; count < 13; count++) {
        array[count] = count;
    }
    for (count = 0; count < 13; count++) {
        printf("%d ", array[count]);
    }*/

    /*void *p = calloc(2, 3 * sizeof(int));
    printf("%d", p);*/

    // 定义链表的各个节点的值
    /*LinkList *head, x, y, z;
    head = &x;
    x.value = 10;
    x.next = &y;
    y.value = 20;
    y.next = &z;
    z.value = 30;
    z.next = NULL;

    // 定义指针p指向链表的头节点，通过指针p去遍历链表
    LinkList *p = head;
    while (p != NULL) {

        printf("%d\n", p->value);
        p = p->next;
    }*/

    /*int a = 4, b = 3;
    // 首先基于以下几点
    // 1. 自己和自己异或的结果是0
    // 2. 任何数和0异或结果还是其本身
    // 3. 任何数和1异或所有位都会被翻转
    // 4. 异或的结合律：(z ^ y) ^ x = x ^ (y ^ z) = x ^ z ^ y
    a = a ^ b;
    b = b ^ a;  // b = b ^ a = b ^ (a ^ b) = b ^ b ^ a = 0 ^ a = a
    a = a ^ b;  // a = a ^ b = (a ^ b) ^ a = a ^ (b ^ a) = a ^ a ^ b = b
    printf("%d--%d\n", a, b);*/

    /*int a = 3;
    int b = a << 2;
    printf("%d", b);*/

    /*struct bitArea bit;
    bit.a = 1;
    bit.b = 7;
    bit.c = 15;
    printf("%d,%d,%d", bit.a, bit.b, bit.c);*/

    /*int r = 2;
    // 如果宏定义中的没有加括号，这种调用方式就得不到正确的结果
    printf("%f\n", AREA(r + 1));*/

    /*int x1,x2,x3,min;
    scanf("%d,%d,%d", &x1, &x2, &x3);
    min = min2(x1, x2, x3);
    printf("最小值：%d", min);*/

    /*#ifdef TRUE_FLAG
        printf("true");
    #else
        printf("false");
    #endif*/

    // 打开文件
//    FILE *fp = fopen("E:\\projects\\clion_work\\c\\c-basic\\test.txt", "r+");
//    if (fp != NULL) {
        // 字符读
        // fgetc用于一个字符一个字符的读取，每次调用后文件指针自动向后移动一个字节，即使获取的值没有被保存
        // 还有一个函数getc，用法和作用与fgetc完全一模一样
        /*int ch = fgetc(fp);
        while (ch != EOF) {
            putchar(ch);
            ch = fgetc(fp);
        }*/
        // 字符写，fputc会从当前指针开始，向后写入字符，所以如果是以写或者读写模式打开，指针默认是在第一个字节，直接写会覆盖原有内容
        // 写入失败会返回 EOF
        // 还有一个函数putc，用法和作用与fputc完全一模一样
        /*printf("请输入要保存的字符串：\n");
        char c = getchar();
        while (c != '\n') {
            fputc(c, fp);
            c = getchar();
        }*/

        // 字符串读
        // 定义一个数组存放读取出的字符串
//        char str[11];
        // 读取的时候，最后一位的 '\0' 也会算入一位，所以想要读取10位字符串，长度就要写11
        // 如果遇到换行或者EOF都会停止读取，即一次最多读取一行
        /*fgets(str, 11, fp);
        printf("%s", str);*/
        // 字符串写
        /*int i = fputs("111111111", fp);
        printf("%d", i);*/

        // 格式化读写函数为fscanf和fprintf，他们的用法和scanf与printf一样，区别是前者的对象不是键盘输入而是文件
        // 数据块读写函数为fread(buffer, size, count, fp)和fwrite(buffer, size, count, fp)
        // buffer是一个存放输入/输出数据的首地址
        // size表示数据块的字节数
        // count表示要读写的数据块块数
        // fp表示文件指针
        // getw函数和putw函数每次会读取或者写入一个字（两个字节）

//    }
    // 关闭文件
//    fclose(fp);
    return 0;
}
