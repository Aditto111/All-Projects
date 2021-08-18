#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * trim(char * buff);

int main()
{
    char buff[29];
    strcpy(buff, "    \r\n\t     abcde    \r\t\n     ");
    char* out = trim(buff);
    printf(">>>>%s<<<<\n",out);
}

char * trim(char * buff)
{
    //PRECEDING CHARACTERS
    int x = 0;
    while(1==1)
    {
        if((*buff == ' ') || (*buff == '\t') || (*buff == '\r') || (*buff == '\n'))
            {
                x++;
                ++buff;
            }
        else
            break;
    }
    printf("PRECEDING spaces : %d\n",x);
    //TRAILING CHARACTERS
    int y = strlen(buff)-1;
    while(1==1)
    {
        if(buff[y] == ' ' || (buff[y] == '\t') || (buff[y] == '\r') || (buff[y] == '\n'))
            {
                y--;
            }
        else
            break;
    }
    y = strlen(buff)-y;
    printf("TRAILING spaces : %d\n",y);
    buff[strlen(buff)-y+1]='\0';
    return buff;
}
