//
// Created by lawliet.L on 2020/1/5.
//

// 底板结构体，用于标识每个点的属性
struct BOARD {
    int var;    // 表示当前点的状态，1标识被占用，0标识未被占用
    int color;  // 表示每个点的颜色
} TABLE_board[Vertical_boxs][Horizontal_boxs];

// 游戏方块结构体
struct SHAPE {
    char box[2];    // 用来表示方块的形状
    int color;  // 用来表示每个方块的颜色
    int next;   // 用来表示下个方块的编号
};
