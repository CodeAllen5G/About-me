//008Wild pointer.cpp
#include <iostream>

using namespace std;

class Test
{
public:
    Test() {
        i = 10;
        delete this;
    }
        int i;
};

int main() {
    Test * test = new Test();
    cout << test->i << endl;
    getchar();
}