
#include<string.h>
int main()
{
    char p;
    scanf("%s",&p);
    if((p<='z') && (p>='a'))
    {
    if(p=='a'|| p=='e' || p=='i' || p=='o' || p=='u')
    {
        printf("Vowels");
    }
    else
    {
        printf("Consonants");
    }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
