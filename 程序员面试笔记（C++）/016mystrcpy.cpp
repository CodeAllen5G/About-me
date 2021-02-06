//016mystrcpy.cpp

#include <stdio.h> 
#include <string.h> 

char * mystrcpy(char *str1,const char *str2)
{
    char *p = str1;
    if(p == NULL || str2 == NULL)
    {
        printf("The string is error!\n");  /*非法的字符串拷贝*/
        //exit(0);
    }
    while(*str2 != '\0')             /*实现字符串的拷贝*/
    {
        *p = *str2;
        p++;
        str2++;
    }
    *p = '\0';                      /*向字符串str1中添加结束标志*/
    return str1;                    /*返回目的字符串的头指针*/
}

int main() {
	char str1[20];
	char * str2 = "Hello World";
	printf("%s\n", mystrcpy(str1,str2));
	return 0;
}
