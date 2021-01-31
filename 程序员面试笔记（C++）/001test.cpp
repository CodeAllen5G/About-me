#include <iostream>

using namespace std;

void swap(int *m , int *n) {
    int t = *m;
    *m = *n;
    *n = t;
}

void sort(int *pa, int *pb, int *pc) {
    if(*pa<*pb) swap(*pa, *pb);
    if(*pb<*pc) swap(*pb, *pc);
    if(*pa<*pb) swap(*pa, *pb);
}

int main(int argc, char *argv[]) {
    int a = 80, b = 60, c = 90;
    sort(&a, &b, &c);
    cout << a <<""<< b <<""<<c<<endl;

    return 0;
}