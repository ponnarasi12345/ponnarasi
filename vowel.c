#include<string.h>
int main()
{
    char p;
    scanf("%s",&p);
    if((p<='z' && p>='a') || (p<='Z' && p>='A'))
    {
    if((p=='a' || p=='e' || p=='i' || p=='o' || p=='u' || p== 'A' || p=='E' || p=='I' || p=='O' || p=='U'))
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}

