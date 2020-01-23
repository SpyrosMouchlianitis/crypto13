#include <stdio.h>
#include <stdlib.h>

char crypto(char c){

    if (c >='a' && c <= 'z')
    {
        c -= 'a';
        c = (c+13)%26;
        c += 'a';
    }
        
    if (c >='A' && c <= 'Z')
    {
        c -= 'A';
        c = (c+13)%26;
        c += 'A';
    }

    return c;
}


int main(){

    int c;
    while ( (c=getchar()) != EOF)
    {
        printf("%c", crypto(c));
    }
    

    return 0;
}
