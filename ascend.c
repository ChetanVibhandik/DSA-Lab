#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);
	char arr[n][100];
	int i;
	for(i = 0 ; i < n;i++)
	{
		scanf("%s", arr[i]);
	}
	for(i = 0; i < n - 1; i++)
	{
		int j;
		for(j = 0; j < n- i - 1; j++)
		{
			if(strlen(arr[j]) > strlen(arr[j+1]))
			{
				char temp[100];
				strcpy(temp, arr[j]);
				strcpy(arr[j], arr[j+1]);
				strcpy(arr[j+1], temp);
			}
			else if(strlen(arr[j]) == strlen(arr[j+1]))
			{
				int k;
				for(k = 0; k < strlen(arr[j]); k++)
				{
					if(arr[j][k] > arr[j][k+1])
					{
						char temp[100];
						strcpy(temp, arr[j]);
						strcpy(arr[j], arr[j+1]);
						strcpy(arr[j+1], temp);
						break;
					}
				}
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("%s\n", arr[i]);
	}
}
						
