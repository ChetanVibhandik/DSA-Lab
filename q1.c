#include<stdio.h>
#include<string.h>
int eval(char s[])
{
    int count = 10, c = 0, t = 0, sum = 0;
    char temp = '('; // jugaad
    for(int i = 0; i <= strlen(s); i++)
        if(s[i] ==  '+' || s[i] == '-' || i == strlen(s))
        {
            if(temp == '(') sum = c; //imp
            if(temp == '+') sum =  t + c ;
            else if(temp == '-') sum =  t - c ;
            temp = s[i]; // imp
            t = sum; // imp
            c = 0;
        }
        else 
            c = c*count + (s[i]-'0');
    return sum;
}
int recur(char ab[100], int k)
{
   char s1[100];
    if(k <= 9)
    {
        for(int i = 0; i < 3; i++)
        {
            char a[][2] = {"+","-",""};
            char arr[2] = {k+'0'};
            strcpy(s1, ab);
            strcat(s1,a[i]);
            strcat(s1,arr);
            recur(s1,k+1);
        }      
    }
    else
         if(eval(ab)==100)
             printf("%s = 100\n",ab);
}
int main(){recur("1",2);}