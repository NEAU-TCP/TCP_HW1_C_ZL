#include <stdio.h>

int main()
{
    char X[200];
    int letters = 0, digits = 0, spaces = 0, others = 0;
    fgets(X, 200, stdin);

    int i = 0;
    while(X[i] != '\0')
    {
        if((X[i] >= 'A' && X[i] <= 'Z') || (X[i] >= 'a' && X[i] <= 'z'))
        {
            letters++;
        }
        else if(X[i] >= '0' && X[i] <= '9')
        {
            digits++;
        }
        else if(X[i] == ' ')
        {
            spaces++;
        }
        else
        {
            others++;
        }
        i++;
    }
    
    printf("letters=%d\n", letters);
    printf("digits=%d\n", digits);
    printf("spaces=%d\n", spaces);
    printf("others=%d\n", others);
    
    return 0;
}
