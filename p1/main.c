#include <stdio.h>

int main(void)
{
    char arr[10];
    char *p = nullptr;
    char *q = nullptr;

    for (p=arr;p<arr+10;p++)
    {
        scanf("%c",p);
    }
    
    char *maxptr = arr;
    int maxcount = 0;
    
    for (p=arr;p<arr+10;p++)
    {
        int count = 0;
        for (q=arr;q<arr+10;q++)
        {
            if (*p==*q) count++;
        }
        if (count>maxcount)
        {
            maxcount = count;
            maxptr = p;
        }
    }
    
    printf("%c %d",*(maxptr),maxcount);
}
