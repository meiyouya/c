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

// ͨ��ָ�뽻��ֵ
void swap(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// ��������ָ�����
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
            printf("δ֪��������");
    }
}

// ��ת����
void reverse(int arr[], int n) {
    int j, temp;
    for (int i = 0; i < (n - 1) / 2; i++) {
        j = n - 1 - i;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

// ָ�뺯��
int * getP() {
    static str = "this is a string";
    return &str;
}

// ����ָ��
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

// ����ö��
enum Direction {
    up = 3, down = 1, left, right
};

enum Color {
    red, yellow, blue, white, black
};

// ����һ���Զ���ĸ�������
typedef struct {
    int real, im;
} complex;

// ���㸴���˻��ĺ���
complex mul(complex c1, complex c2) {
    complex c;
    c.real = c1.real * c2.real - c1.im * c2.im;
    c.im = c1.real * c2.im + c1.im * c2.real;
    return c;
}

int main() {
/*    printf("Hello, World!\n");

    float r, area, circle;
    printf("\n ���������֣�");
    scanf("%f", &r);
    circle = 2 * PI * r;
    area = PI * r * r;
    printf("\n �ܳ��ǣ�%f", circle);
    printf("\n ����ǣ�%f", area);

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
    printf("%d\n", src_arr[0]);     // ���1
    change_arr(src_arr);
    printf("%d\n", src_arr[0]);     // ���5*/

    /*extern int add(int, int);   // ����������������
    int result = add(5, 6); // ����test.c�еĺ���f
    printf("%d\n", result);*/

    // ָ��
    /*int a = 3;
    printf("%d\n", a);
    int *p = &a;    // ��������ʱ��*��ʾ�ñ�����һ��ָ��������Ա���ʹ��&����ȡ���ñ����ĵ�ַ
    printf("%d\n", p);  // �������a�ĵ�ֵַ
    printf("%d\n", *p); // * ��ָ�����ʹ��ʱ����˼��ָ���ָ������洢��ָ��ĵط������� *p��a��������һ����
    int *p2 = &p;   // ��p�ĵ�ֵַ��ֵ��p2
    printf("%d\n", p2); // ���p�ĵ�ֵַ
    printf("%d\n", *p2);    // ���p��ֵ����a�ĵ�ֵַ
    int *p3 = &*p;  // ��p�д�ŵĵ�ַ����a�ĵ�ֵַ��ֵ��p3
    printf("%d\n", p3); // ���a�ĵ�ֵַ
    printf("%d\n", *p3);    // ���a��ֵ*/

    /*int a = 10, b = 20;
    printf("%d---%d\n", a, b);  // ��� 10---20
    swap(&a, &b);
    printf("%d---%d\n", a, b);  // ��� 20---10*/

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
    printf("a[0]�ĵ�ַ��%X, a��ֵ��%X, p��ֵ��%X\n", &a[0], a, p);  // ����������ֵ��һ����
    printf("*a��ֵ��%d��*p��ֵ��%d\n", *a, *p);  // ����������ֵ��һ����
    for (int i = 0; i < 3; i++) {
        printf("����a�ĵ�%d��Ԫ�صĵ�ַ�ǣ�%X\n", i, (p + i));  // C�����й涨�������ָ��p���ָ���i��Ԫ�أ���ôp+1��ָ���i+1��Ԫ��
        printf("����a�ĵ�%d��Ԫ�ص�ֵ�ǣ�%X\n", i, *(p + i));
    }
    for (int i = 0; i < 3; i++,p++) {
        printf("����a�ĵ�%d��Ԫ�صĵ�ַ�ǣ�%X\n", i, p);  // C�����й涨�������ָ��p���ָ���i��Ԫ�أ���ôp+1��ָ���i+1��Ԫ��
        printf("����a�ĵ�%d��Ԫ�ص�ֵ�ǣ�%X\n", i, *p);
    }*/

    /*int arr[] = {4,7,8,1,3};
    for (int i = 0; i < 5; i++) {
        printf("%d ",arr[i]);
    }
    reverse(arr, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ",arr[i]);
    }*/

    // ָ����ʶ�ά���飬�Զ�ά����Ϊ��
    /*int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // ��������Ķ���a[0][0]�ĵ�ֵַ
    printf("a=%d\n", a);
    printf("*a=%d\n", *a);
    printf("a[0]=%d\n", a[0]);
    printf("&a[0]=%d\n", &a[0]);
    printf("&a[0][0]=%d\n", &a[0][0]);

    // ��������Ķ���a[1][0]�ĵ�ֵַ
    printf("a+1=%d\n", a+1);
    printf("*��a+1��=%d\n", *(a+1));
    printf("a[1]=%d\n", a[1]);
    printf("&a[1]=%d\n", &a[1]);
    printf("&a[1][0]=%d\n", &a[1][0]);

    // ʹ��ָ�������ά����
    int *p;
    for (p = *a; p < *a + 3 * 4; p++) {
        printf("%d\n", *p);
    }*/

    // ��ȡָ��λ�õ�ֵ
    /*int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int i = 2;
    int j = 2;
    int *p = a;
    printf("%d\n", *(p + i*4 + j));
    int (*q)[4] = a;    // ��ָ��Ĳ�������Ϊ�ڶ�ά�ĳ��ȣ��Ϳ���ÿ�μ�1�������ڶ�ά���׵�ַ
    printf("%d", *(q + 1)[0]);*/

    /*printf("%d", getP());
    func = sum;
    printf("%d", (*func)(3, 7));*/

    // �����ṹ��
    /*struct student stu1;
    stu1.score = 85.0;
    printf("%.2f", stu1.score);*/

    // ����ṹ������
    /*struct student boy_student[] = {
            {80, "����", '1'},
            {85, "����", '0'},
            {90, "����", '1'}
    };
    for (int i = 0; i < 3; i++) {
        char *sex;
        if (boy_student[i].sex == '1') {
            sex = "��";
        } else if (boy_student[i].sex == '0') {
            sex = "Ů";
        }
        printf("%s��һ��%s���ӣ���εĿ��Գɼ���%.2f\n", boy_student[i].name, sex, boy_student[i].score);
    }*/

    // ָ��ṹ���ָ��
    /*struct student s = {60, "����", '1'};
    struct student *p = &s;
    printf("%s�Ŀ��Գɼ���%.2f\n", (*p).name, (*p).score);*/

    /*printf("%d,%d,%d,%d\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double));
    printf("%d,%d", sizeof(struct s), sizeof(union u));*/

    // ����ö��
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
    printf("һ����%d�ֽ��",count);*/

    // ʵ������������
    complex a = {3,4};
    complex b = {5,6};
    complex res = mul(a, b);
    printf("a * b �Ľ���ǣ�%d + %di", res.real, res.im);
    return 0;
}

