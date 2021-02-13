#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("\n enter the character:");
    scanf("%c",&ch);
    if(ch>64 && ch<91)
    return (ch+32);
    else
      return(ch);
    return 0;
}
