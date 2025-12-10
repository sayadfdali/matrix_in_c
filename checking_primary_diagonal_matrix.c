#include<stdio.h>
int main() 
 { 
    int r,c;
    scanf("%d %d" ,&r, &c);
    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int i=0;i<c;i++)
        {
            scanf("%d", &a[r][c]);
        }
    }
    if(r==c)
    {
        printf("This is a square matrix\n");
    }
    else
    {
        printf("This is not a square matrix\n");
    }
    return 0;
}