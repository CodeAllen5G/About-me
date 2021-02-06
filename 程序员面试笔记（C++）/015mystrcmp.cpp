//015mystrcmp.cpp

#include <stdio.h>
#include <string.h>

int mystrcmp(const char *str1, const char *str2) {
    if(str1 == NULL || str2 == NULL) {
        printf("the string is error1");
        //exit(0);
    }

    while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2) {
        str1++;
        str2++;
    }

    if (*str1 != '\0' && *str1 == '\0') {
        return 1;
    } else if(*str1 == '\0' && *str2 != '\0') {
        return -1;
    } else if (*str1 > *str2) {
        return 1;
    } else if (*str1 < *str2) {
        return -1;
    }

    return 0;
    
}

int main() {
    char *s1="Hello";
    char *s2="Hello";
    int r;

    r = mystrcmp(s1, s2);
	printf("%d", r);
	 
    return 0;
}
