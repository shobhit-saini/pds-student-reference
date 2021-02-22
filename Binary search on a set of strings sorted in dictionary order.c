/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define maxsize 100
int bsearch(char brr[][maxsize], int low, int high, char *key)
{
    if(low <= high)
    {
        int mid = (low + high)/2;
        int a = strcmp(brr[mid], key);
        printf("%d\t", a);
        if(a == 0)
        {
            return mid;
        }
        if(a < 0)
        {
            bsearch(brr, mid+1, high, key);
        }
        else
        {
            bsearch(brr, low, mid-1, key);
        }
        
    }
    else
        return -1;
}
int main()
{
    int n;
    printf("Enter the number of strings:");
    scanf("%d", &n);
    char arr[n][maxsize];
    for(int i = 0; i < n; i++)
    {
        scanf(" %s", &arr[i]);
    }
    
    printf("\nElements are:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s ", arr[i]);
    }
    char key[maxsize];
    printf("Enter the words you want to search");
    scanf("%s", key);
    int res = bsearch(arr, 0, n-1, key);
    printf("%d", res);
    if(res == -1)
    {
        printf("Key not found");
    }
    else
    {
        printf("Key found at position: %d", res);
    }
    return 0;
}
