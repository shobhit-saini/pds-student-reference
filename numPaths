#include <stdio.h>
int res = 0;
void numPaths(int i, int j)
{
    if(i < 0 || j < 0)
        return;
    if(i == 0 && j == 0)
        res++;
    numPaths(i-1, j);
    numPaths(i, j-1);
}
int main()
{
    int i, j;
    scanf("%d %d", &i, &j);
    numPaths(i, j);
    printf("Number of paths: %d", res);
    return 0;
}
