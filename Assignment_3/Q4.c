
// Accept one character from user and convert case of that charcter

#include <stdio.h>
#include <ctype.h>

char DisplayConvert(char CValue)
{
    if (isupper(CValue))
    {
        printf("%c", CValue + 32);
    }
    else if (islower(CValue))
    {
        printf("%c", CValue - 32);
    }
}
int main()
{
    char cValue = '\0';

    printf("enter character\n");

    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}