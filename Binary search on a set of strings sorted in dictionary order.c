#include <stdio.h>
#include <string.h>
#define maxsize 100
int bsearch(char brr[][maxsize], int low, int high, char *key)
{
    if(low <= high)
    {
        int mid = (low + high)/2;
        int a = strcmp(brr[mid], key);
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
        scanf("%s", &arr[i]);
    }
    
    char key[maxsize];
    printf("Enter the words you want to search:");
    scanf("%s", key);
    int res = bsearch(arr, 0, n-1, key);
    if(res == -1)
    {
        printf("Key not found");
    }
    else
    {
        printf("Key found at position: %d", res+1);
    }
    return 0;
}
