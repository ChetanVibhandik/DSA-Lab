#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];
    scanf("%s", arr);
    int len = strlen(arr);
    int check = arr[len - 1] - '0';

    char temp[100];
    int count = 0;
    for(int i = len - 2; i >= 0; i--)
        temp[count++] = arr[i];
    int sum = 0;
    for(int i = 0; i < count; i++)
    {
        if(i % 2 == 0)
        {
            int t = temp[i] - '0';
            if(t < 5)
                temp[i] = (2*temp[i]) + '0';
            else if(t == 6)
                temp[i] = '3';
            else if(t == 7)
                temp[i] = '5';
            else if(t == 8)
                temp[i] = '7';
            else if(t == 9)
                temp[i] = '9';
        }
        sum += temp[i] - '0';
    }
    if((sum + check) % 10 == 0)
        printf("Valid\n");
    else
        printf("Not Valid\n");

}