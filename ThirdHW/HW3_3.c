#include <stdio.h>
int MyStrLen(char s[])
{
    int len = 0;
    while(s[len] != '\0')
    {
        len++;
    }
    return len;
}
 
void MyStrRev(char s[])
{
    int len = MyStrLen(s);
    int i = 0, j = 0;
    char temp = '0';
    for(i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main()
{
    char str[101];
    scanf("%s", str);
     
    int length = MyStrLen(str);
    MyStrRev(str);
     
    printf("Len = %d\n", length);
    printf("Rev = %s\n", str);
    
    return 0;
}




