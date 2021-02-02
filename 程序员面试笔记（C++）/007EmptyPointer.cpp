//007EmptyPointer.cpp

pTest->func1() => Test::func1()

int *p = NULL;


int *p = NULL;
int *p = &a;
int *p = (int *)malloc(sizeof(int));

int *p = (int *)malloc(sizeof(int));
free(p);
p = NULL;

int main() {
    char * str = NULL;   //这里没有初始化会导致野指针产生
    getMemory(&str);
    strcpy(str, "hello world");
    cout << str <<endl;
    getchar();
}

int main() {
    char * str = (char *)malloc(15);
    strcpy(str, "love it");
    cout << str << endl;
    free(str);
    str = NULL;   //主要是这里

    getMemory(&str);

}

void getMemory(char **p) {
    if(*p == NULL) {
        char ch[15];   //这种函数调用结束之后就会失去生命周期，再调用就会出错
        *p = ch;
    }
}

改成
void getMemory(char **p) {
    if(*p == NULL) {
        *p = (char *)malloc(15);
    }
}

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
