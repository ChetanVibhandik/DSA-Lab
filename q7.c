#include<stdio.h>
#include<string.h>

int main()
{
    printf("Enter the text to encode:\n");
    char line[100];
    scanf("%[^\n]s", line);
    printf("Enter the key:\n");
    int key;
    scanf("%d", &key);
    char temp[100];
    int count = 0;
    for(int i = 0; i < strlen(line); i++)
    {
        if(line[i] != ' ')
            temp[count++] = line[i];
    }
    for(int i = 1; i <= key; i++)
    {
        for(int j = i - 1; j < strlen(temp);j = j + key)
        {
            printf("%c", temp[j]);
        }
    }
    printf("\n");
}