#include <iostream>
using namespace std;

/*
### 编程题＃2：大象喝水
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。

输入
输入有一行：包行两个整数，以一个空格分开，分别表示小圆桶的深h和底面半径r，单位都是厘米。

输出
输出一行，包含一个整数，表示大象至少要喝水的桶数。
*/

int main(){
    float pi = 3.14;
    float height,radius;
//    cout << "输入桶的高度及半径！\n" << endl;
    cin >> height >> radius;
    int number = 20/(pi * (radius/100* radius/100) * height /100);
    cout << number << endl;
}