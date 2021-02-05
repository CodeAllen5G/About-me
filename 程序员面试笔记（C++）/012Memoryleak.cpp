//012Memoryleak.cpp

void doSomething() {
    char * p = new char[size];
    if(!validationCheck(p, size)) {
        cout << "error" << endl;
        return;
    }

    memoryOperation(p, size);
    delete p;
}

char a[8] = "hello";
memset(a, 0, 16);

int main() {
    vector <int> ivec(10);
    cout << ivec[0] <<endl;
    cout << ivec[100] << endl;
    getchar();
}

int main() {
    char *a = new char[32];
    int b[8];
    int c[128];

    c[128] = 0;
    c[129] = 0;
    c[130] = 0;

    strcpy(a, "hello");
    cout << a << endl;
    getchar();
}