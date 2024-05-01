//The following program prints each word in a new line:

#include<stdio.h>
#include<ctype.h>

char* print_word(char a[])
{
    for ( int i = 0 ; a[i] != '\0' ; i++){
        if(isspace(a[i]))
        
        a[i] = '\n';
    }
    return a;
}

int main()
{
    char a[] = "hello everyone. "
                "welcome to world";
    char* p;
    p = print_word(a);
    printf("%s", p);
}