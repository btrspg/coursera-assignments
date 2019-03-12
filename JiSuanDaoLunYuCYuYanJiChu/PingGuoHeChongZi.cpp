#include <iostream>
using namespace std;
//### 编程题＃1：苹果和虫子
//来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

//注意： 总时间限制: 1000ms 内存限制: 65536kB

//描述
//你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？

//输入
//输入仅一行，包括n，x和y（均为整数）。

//输出
//输出也仅一行，剩下的苹果个数

int main(){
    int apple_n,eating_time,total_time;
    cout << "输入，苹果数，虫子吃掉一个苹果的时间，经过的时间" <<endl;
    cin >> apple_n >> eating_time >> total_time;
    int apple = apple_n - eating_time * total_time;
    if(apple > 0){
        cout << "剩余：" << apple << endl;
    }
    else{
        cout << "无剩余苹果！" << endl;
    }
}