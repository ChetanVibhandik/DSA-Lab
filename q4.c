#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a < 0 || a > 9999)
        printf("Not in range\n");
    else
    {
        char tens[][8] = {"Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety "};
        char num[][9] = {"One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine "};
        char first[][10] = {"Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};
        int temp;
        temp = a/1000;
        if(temp > 0)
            printf("%sThousand ", num[temp - 1]);
        a = a % 1000;
        temp = a / 100;
        if(temp > 0)
            printf("%sHundred ", num[temp - 1]);
        a = a % 100;
        if(a > 0)
        {
            printf("and ");
            temp = a/10;
            if(temp > 1)
            {
                if(temp > 1)
                    printf("%s", tens[temp - 2]);
                temp = a % 10;
                if(temp > 0)
                    printf("%s", num[temp - 1]);
            }
            else if(temp == 1)
            {
                temp = a % 10;
                printf("%s", first[temp]);
            }
            else printf("%s", num[a % 10 - 1]);
        }
    }
}