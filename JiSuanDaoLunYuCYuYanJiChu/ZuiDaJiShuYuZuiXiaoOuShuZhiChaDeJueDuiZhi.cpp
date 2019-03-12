#include <iostream>
using namespace std;

/*
### 编程题＃4：最大奇数与最小偶数之差的绝对值
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
输入6个正整数，且这6个正整数中至少存在一个奇数和一个偶数。

设这6个正整数中最大的奇数为a，最小的偶数为b，求出|a-b|的值

输入
输入为一行，6个正整数,且6个正整数都小于100

输入保证这6个数中至少存在一个奇数和一个偶数

输出
输出为一行，输出最大的奇数与最小的偶数之差的绝对值
*/

int main(){
    int numbers[6];
    int max_odd =0;
    int min_even =0;
//    cout << "输入6个正整数，必须包含至少一个奇数和一个偶数" << endl;
    for(int i =0;i<6;i++){
        cin >> numbers[i];
        if(numbers[i] % 2 ==1){
            if(max_odd < numbers[i]){
                max_odd = numbers[i];
            }
        }else{
            if(min_even == 0 ){
                min_even = numbers[i];
            }else if(min_even > numbers[i]){
                min_even = numbers[i];
            }
        }
    }
    int result;
    if(min_even > max_odd){
        result = min_even - max_odd;
    }else{
        result = max_odd - min_even;
    }

    cout << result << endl;
}