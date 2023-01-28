#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char*convert(int num)
{
    int i=0;
    int size=1;
    char*result=(char*)malloc(size*sizeof(char));
    while(num>0)
    {
        size++;
        result=(char*)realloc(result,size*sizeof(char));
        result[i]='A'+(num-1)%26;
        num=(num-1)/26;i++;
    }
    result[size-1]=NULL;
    for(int i=0;i<=(size-2)/2;i++)
    {
        char temp=result[i];
        result[i]=result[size-2-i];
        result[size-2-i]=temp;
    }
    return result;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%s",convert(n));
}