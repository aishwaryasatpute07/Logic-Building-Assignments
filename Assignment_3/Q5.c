// Accept on character from user and check wheather that character is vowel (a,e,i,o,u) or not

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1;
#define FALSE 0;

bool ChkVowel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    bool bret = FALSE;

    printf("enter character \n");

    scanf("%c",&cValue);

    bret = ChkVowel(cValue);

    if(bret == 1 )
    {
        printf("it is a vowel");
    }
    else
    {
        printf("it is not vowel ");
    }
    return 0;

}
