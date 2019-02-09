
#include<string.h>
int main()
{
    char p;
    printf("enter the character:\n");
    scanf("%s",&p);
    if((p<='z') && (p>='a'))
    {
    if(p=='a'|| p=='e' || p=='i' || p=='o' || p=='u')
    {
        printf("vowels");
    }
    else
    {
        printf("consonants");
    }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
