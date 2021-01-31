int a = 10, b = 20;
int *const p = &a;  //这里定义了常量指针，const靠近p,说明是修饰p的，因此p的内容是不可以改变的，指针p只能指向一个确定的地址
*p = 30;

int a =10, b = 20;
const int *p = &a;
p = &b;

void exchange2(int * const a, int * const b)


int a = 10, b = 20;
int *p[3];
p[0] = &a;
p[2] = &b;

int a[3] = {1,2,3};
int(*p)[3];
p = &a;

int main()
{
    int a[6] = {1,2,3,4,5,6};
    int *p = &a; //这里是想取数组的地址，应该用数组指针

    /*如果想获取数组首元素的地址*/
    int *p = a;
    int *p = &a[0];
}

int a = 10,b = 20;
int *q = &a;
int **p = &q;
**p = 30;