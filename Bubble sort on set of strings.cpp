#include <stdio.h>
#include <string.h>
#include <stdio.h>
#define maxsize 100
void bubbleSort(char brr[][maxsize], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        {
            int a = strcmp(brr[j], brr[j+1]);
            if(a > 0)
            {
                char temp[100];
                strcpy(temp, brr[j]);
                strcpy(brr[j], brr[j+1]);
                strcpy(brr[j+1], temp);
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of strings:");
    scanf("%d", &n);
    char arr[n][maxsize];
    for(int i = 0; i < n; i++)
    {
        scanf("%s", &arr[i]);
    }
    
    printf("\nElements are:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s ", arr[i]);
    }
    bubbleSort(arr, n);
    printf("\nArray's elements after bubble sorting:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s ", arr[i]);
    }
    return 0;
}
