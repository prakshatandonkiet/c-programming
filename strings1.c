
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("input the string: ");
    gets(str);
    int len=0;
    for(int i=0;i<str[i]!='\0';i++)
    len++;
    printf("the length of the string is: %d",len);
    return 0;
}

