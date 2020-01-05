#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <graphics.h>
#include "struct/base.c"

// 定义按键码
#define VK_LEFT 0x4b00
#define VK_RIGHT 0x4d00
#define VK_DOWN 0x5000
#define VK_UP 0x4800
#define VK_ESC 0x011b
#define TIMER 0x1c

// 常量
#define MAX_BOX 19      // 一共有19种形态的方块
#define BSIZE 20        // 方块的边长是20个像素
#define Sys_x 160       // 方块左上角的x坐标
#define Sys_y 25        // 方块左上角的y坐标
#define Horizontal_boxs 10      // 水平有10个方块格子
#define Vertical_boxs 15        // 垂直方向有15个方块格子
#define Begin_boxs_x Horizontal_boxs/2      // 第一个方块的初始位置
#define FgColor 3   // 前景色
#define BgColor 0   // 背景色
#define LeftWin_x Sys_x + Horizontal_boxs * BSIZE + 46      // 右侧状态栏左上角X坐标
#define false 0
#define true 1

// 移动方向
#define MoveLeft 1
#define MoveRight 2
#define MoveDown 3
#define MoveRoll 4

// 全局变量
int current_box_nump;       // 用于保存当前方块的编号
int Curbox_x = Sys_x + Begin_boxs_x * BSIZE, Curbox_y = Sys_y;  // 当前方块的坐标
int flag_newbox = false;    // 是否产生新方块
int speed = 0;  // 下落速度
int score = 0;  // 得分

void interrupt(*oldtimer)(void);

// 所有方块形态数组
struct SHAPE shapes[MAX_BOX] = {
    /*
     * 口       口 口 口    口 口         口
     * 口       口            口   口 口 口
     * 口 口                  口
     */
        {0x88, 0xc0, CYAN, 1}
};
int main() {
    printf("Hello, World!\n");
    return 0;
}
