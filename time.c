#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,st,et,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&st);
       scanf("%d",&et);
    }
    if(st<et)
    {
        printf("%d %d",st,et);
    }
    return 0;
}
