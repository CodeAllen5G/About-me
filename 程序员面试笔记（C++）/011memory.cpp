//011memory.cpp

int a = 0;

int main() {
    char ch = 'a';
    static int c = 0;

    char *p1 = "abc";
    char *p2 = "abc";
    char *p3 = &ch;
    char *p4 = (char *)malloc(10);
}