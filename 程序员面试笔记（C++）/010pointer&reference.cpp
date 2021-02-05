//010pointer&reference.cpp

int main() {
    int a = 1-, b = 20;
    int &r = a;
    int *p = &a;
    int * &rp = p;

    if((int)&r == (int)&a) {
        cout << "&r == &a" << endl;
    } else {
        cout << "&r != &a" << endl;
    }

    if ((int)&p == (int)&a))
    {
        cout << "&p == &a" << endl;
    } else {
        cout << "&p != &a" << endl;
    }

    r = b;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    (*p)++;
    (*rp)++;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    getchar();
}
