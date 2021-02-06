//014string2.cpp
#include <stdio.h>
#include <string.h>

int main() {
    char *str1 = "Borland International", *str2 = "national";
    char *result;
    result = strstr(str1, str2);
    if(result) {
        printf("%s\n",result);
    } else {
        printf("no found");
    }
}