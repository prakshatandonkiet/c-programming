#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ascii;
    printf("\n type a character and press the enter:");
    ascii=getchar();
    printf("the character is %c",ascii);
    printf("corresponds to the ASCII is %d",ascii);
    return 0;
}
