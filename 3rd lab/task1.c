#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a value: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is character", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        if(ch > 0)
        {
            printf("This is Number", ch);
        }
        else
        {
            printf("'%c' is ZERO", ch);
        }
    }
    else
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}
s
