#include <iostream>
#include <cstdio>

using namespace std;

int add(int a, int b) {
    return (a + b);
}

int minu(int a, int b) {
    return (a - b);
}

int multi(int a, int b) {
    return (a * b);
}

int divide(int a, int b) {
    return (a / b);
}

int process(int a, int b, int(* func)(int, int)) {
    return func(a, b);
}

int main() {
    int a = 10, b = 20;
    int res1 = process(a, b, add);
    int res2 = process(a, b, minu);
    int res3 = process(a, b, multi);
    int res4 = process(a, b, divide);
    cout << res1 << res2 << res3 << res4 << endl;
    getchar();
}
