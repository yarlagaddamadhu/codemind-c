
#include<stdio.h>
int main()
{
    int arr[10],n,mp,i,count,l,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    i=0;
    mp=arr[i];
    while(i<n)
    {
        if(mp<arr[i])
        mp=arr[i];
        i++;b;
    }
    while(l)
    {
        i=0;
        count=0;
        while(i<n)
        {
            if(mp%arr[i]==0)
            count++;
            i++;
        }
        if(count==n)
        break;
        else
        mp++;
    }
    for(i=1;i<(2);i++)
    printf("%d",mp);
    scanf("$^
ch");
}