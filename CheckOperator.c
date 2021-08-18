#include<stdio.h>

void main()
{
    char ch[10];
    printf("\n Enter any operator:");
    gets(ch);

    switch(ch[0])
    {
        case'-':
            if(ch[1]=='-')
                printf("\n Decrement");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='<')
                printf("\n Not an operator");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='>')
                printf("\n Not an operator");
            else if(ch[1]=='=')
                printf("\n Not an operator");
            else if(ch[1]=='!')
                printf("\n Not an operator");
            else if(ch[1]=='/')
                printf("\n Not an operator");
            else if(ch[1]=='*')
                printf("\n Not an operator");
            else if(ch[1]=='+')
                printf("\n Not an operator");
            else
                printf("\n Subtraction");
        break;
        case'+':
            if(ch[1]=='+')
                printf("\n Increment");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='<')
                printf("\n Not an operator");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='>')
                printf("\n Not an operator");
            else if(ch[1]=='=')
                printf("\n Not an operator");
            else if(ch[1]=='!')
                printf("\n Not an operator");
            else if(ch[1]=='/')
                printf("\n Not an operator");
            else if(ch[1]=='*')
                printf("\n Not an operator");
            else if(ch[1]=='-')
                printf("\n Not an operator");
            else
                printf("\n Addition");

        break;
        case'>':
            if(ch[1]=='=')
                printf("\n Greater than or equal");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='<')
                printf("\n Not an operator");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='>')
                printf("\n Not an operator");
            else if(ch[1]=='+')
                printf("\n Not an operator");
            else if(ch[1]=='!')
                printf("\n Not an operator");
            else if(ch[1]=='/')
                printf("\n Not an operator");
            else if(ch[1]=='*')
                printf("\n Not an operator");
            else if(ch[1]=='-')
                printf("\n Not an operator");
            else
                printf("\n Greater than");
        break;
        case'<':
            if(ch[1]=='=')
                printf("\n Less than or equal");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='<')
                printf("\n Not an operator");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='>')
                printf("\n Not an operator");
            else if(ch[1]=='+')
                printf("\n Not an operator");
            else if(ch[1]=='!')
                printf("\n Not an operator");
            else if(ch[1]=='/')
                printf("\n Not an operator");
            else if(ch[1]=='*')
                printf("\n Not an operator");
            else if(ch[1]=='-')
                printf("\n Not an operator");
            else
                printf("\nLess than");
        break;
        case'=':
            if(ch[1]=='=')
                printf("\nEqual to");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='<')
                printf("\n Not an operator");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='>')
                printf("\n Not an operator");
            else if(ch[1]=='+')
                printf("\n Not an operator");
            else if(ch[1]=='!')
                printf("\n Not an operator");
            else if(ch[1]=='/')
                printf("\n Not an operator");
            else if(ch[1]=='*')
                printf("\n Not an operator");
            else if(ch[1]=='-')
                printf("\n Not an operator");
            else
                printf("\nAssignment");
        break;
        case'!':
            if(ch[1]=='=')
                printf("\nNot Equal");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='<')
                printf("\n Not an operator");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='>')
                printf("\n Not an operator");
            else if(ch[1]=='+')
                printf("\n Not an operator");
            else if(ch[1]=='!')
                printf("\n Not an operator");
            else if(ch[1]=='/')
                printf("\n Not an operator");
            else if(ch[1]=='*')
                printf("\n Not an operator");
            else if(ch[1]=='-')
                printf("\n Not an operator");
            else
                printf("\n Bit Not");
        break;
        case'&':
            if(ch[1]=='&')
                printf("\nLogical AND");
            else if(ch[1]==' ')
                printf("\n Not an operator");
                else if(ch[1]=='+')
                printf("\n Not an operator");
            else if(ch[1]=='<')
                printf("\n Not an operator");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='>')
                printf("\n Not an operator");
            else if(ch[1]=='=')
                printf("\n Not an operator");
            else if(ch[1]=='!')
                printf("\n Not an operator");
            else if(ch[1]=='/')
                printf("\n Not an operator");
            else if(ch[1]=='*')
                printf("\n Not an operator");
            else if(ch[1]=='-')
                printf("\n Not an operator");
            else
                printf("\n Bitwise AND");
        break;
        case'|':
            if(ch[1]=='|')
                printf("\nLogical OR");
            else if(ch[1]==' ')
                printf("\n Not an operator");
                else if(ch[1]=='+')
                printf("\n Not an operator");
            else if(ch[1]=='<')
                printf("\n Not an operator");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='>')
                printf("\n Not an operator");
            else if(ch[1]=='=')
                printf("\n Not an operator");
            else if(ch[1]=='!')
                printf("\n Not an operator");
            else if(ch[1]=='/')
                printf("\n Not an operator");
            else if(ch[1]=='*')
                printf("\n Not an operator");
            else if(ch[1]=='-')
                printf("\n Not an operator");
            else
                printf("\nBitwise OR");
        break;
        case'*':
            if(ch[1]=='|')
                printf("\n Not an operator");
            else if(ch[1]==' ')
                printf("\n Not an operator");
                else if(ch[1]=='+')
                printf("\n Not an operator");
            else if(ch[1]=='<')
                printf("\n Not an operator");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='>')
                printf("\n Not an operator");
            else if(ch[1]=='=')
                printf("\n Not an operator");
            else if(ch[1]=='!')
                printf("\n Not an operator");
            else if(ch[1]=='/')
                printf("\n Not an operator");
            else if(ch[1]=='*')
                printf("\n Not an operator");
            else if(ch[1]=='-')
                printf("\n Not an operator");
            else
                printf("\nMultiplication");
        break;
        case'/':
            if(ch[1]=='|')
                printf("\n Not an operator");
            else if(ch[1]==' ')
                printf("\n Not an operator");
                else if(ch[1]=='+')
                printf("\n Not an operator");
            else if(ch[1]=='<')
                printf("\n Not an operator");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='>')
                printf("\n Not an operator");
            else if(ch[1]=='=')
                printf("\n Not an operator");
            else if(ch[1]=='!')
                printf("\n Not an operator");
            else if(ch[1]=='/')
                printf("\n Not an operator");
            else if(ch[1]=='*')
                printf("\n Not an operator");
            else if(ch[1]=='-')
                printf("\n Not an operator");
            else
                printf("\nDivision");
        break;
        case'%':
            if(ch[1]=='|')
                printf("\n Not an operator");
            else if(ch[1]==' ')
                printf("\n Not an operator");
                else if(ch[1]=='+')
                printf("\n Not an operator");
            else if(ch[1]=='<')
                printf("\n Not an operator");
            else if(ch[1]==' ')
                printf("\n Not an operator");
            else if(ch[1]=='>')
                printf("\n Not an operator");
            else if(ch[1]=='=')
                printf("\n Not an operator");
            else if(ch[1]=='!')
                printf("\n Not an operator");
            else if(ch[1]=='/')
                printf("\n Not an operator");
            else if(ch[1]=='*')
                printf("\n Not an operator");
            else if(ch[1]=='-')
                printf("\n Not an operator");
            else
                printf("Modulus");
        break;
        default:
            printf("\n Not an operator");
    }


}
