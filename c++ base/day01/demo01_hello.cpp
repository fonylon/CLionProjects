//
// Created by 风林 on 2017/9/14.
//
#include <iostream>

using namespace std;

void print(const char *str) {
    //cout 表示标准输出
    //<< 操作符表示将操作符右边的内容输出到左边的流中，并返回左侧流对象
    //endl 表示回车换行
    //链式编程，返回cout对象
    cout << str << endl;
}

//面向过程方式计算圆的面积和周长
void circle() {
    //半径
    double r;
    //面积
    double s;
    //周长
    double c;
    print("请输入圆的半径：");
    //cin 表示标准输入
    cin >> r;
    cout << "圆的半径为：" << r << endl;
    s = 3.14 * r * r;
    cout << "圆的面积为：" << s << endl;
    c = 2 * 3.14 * r;
    cout << "圆的周长为：" << c << endl;
}

//面向对象方式计算圆的面积和周长
class Circle {

private:
    double r;
    double s;
    double c;

public:
    double getR() const {
        return r;
    }

    void setR(double r) {
        Circle::r = r;
    }

    double getS() const {
        return 3.14 * r * r;
    }

    double getC() const {
        return 2 * 3.14 * r;
    }
};

void doCircle() {
    Circle circle1{};
    double r;
    print("请输入圆的半径：");
    cin >> r;
    circle1.setR(r);
    cout << "圆的半径为：" << circle1.getR() << endl;
    cout << "圆的周长为：" << circle1.getC() << endl;
    cout << "圆的面积为：" << circle1.getS() << endl;
}

class ErrCircle {
public:
    double r = 3;
    double s = r * 3.14 * r;
};

void doErrCircle() {
    ErrCircle errCircle;
    print("请输入圆的半径：");
    cin >> errCircle.r;
    //s的值在创建ErrCircle对象时就已经初始化了，不会再根据r的变化而变化
    cout << "圆的面积为：" << errCircle.s << endl;
}

void testConst() {
    const int a = 0;
    int const b = 0;
//err   a = 3;
    int const *c = 0;
    const int *d = 0;
    c = &a;
//err    *c = 5;
    int *const e = 0;
//err    e = &b;
    *e = 5;
    const int *const f = 0;
//err    f = &a;
//err    *f = 5;
}

void testVar() {
    int a = 0;
    int b = 0;
    int arr[a + b];
}

void testRef() {
    int a = 4;
    int &b = a;
    cout << &a << endl;
    cout << &b << endl;
}

//值传递，并不能交换实参的值
void errSwap(int a, int b) {
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

//c语言中使用地址传递，直接操作实参的地址，从而改变实参的值
void pointerSwap(int *a,int *b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

//c++中，使用引用传递，直接修改实参的值
void refSwap(int &a,int &b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

int main0101() {
//    print("hello");
//    circle();
//    doCircle();
//    doErrCircle();
//    testRef();
    int a = 10;
    int b = 20;
    refSwap(a, b);
    cout << a << endl;
    cout << b << endl;


    return 0;
}
