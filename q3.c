//Only removed the multi line comment , not the single line comment
#include<stdio.h>
#include<string.h>

int main()
{
    char p[10000];
    scanf("%[^\n]s", p);

    int len = strlen(p);
    char new_1[10000];
    int count = 0;
    int pr = 0;
    p[len] = '\0';

    for(int i = 0; i < len; i++)
    {
        if(pr == 0 && p[i] != '/' && p[i + 1] != '*')
        {
            new_1[count++] = p[i];
        }
        else if(p[i]  == '/' && p[i + 1] == '*' && pr == 0)
        {
            pr = 1;
        }
        else if(p[i] == '*' && p[i + 1] == '/' && pr == 1)
        {
            pr = 0;
        }
    }
    new_1[count] = '\0';
    char new_2[10000];
    int counter = 0;
    int qr = 0;
    /*for(int i = 0; i < count; i++)
    {
        if()
    }*/
    
    printf("%s\n",new_1);
}