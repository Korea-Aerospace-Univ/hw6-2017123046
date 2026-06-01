#include <stdio.h>

int main(void)
{
    int arr1[20];
    int arr2[20];
    
    int *ptr1 = nullptr;
    int *ptr2 = nullptr;
    
    int N;
    scanf("%d",&N);

    for (ptr1 = arr1;ptr1<arr1+N;ptr1++)
    {
        scanf("%d",ptr1);
    }
    
    for (ptr2 = arr2;ptr2<arr2+N;ptr2++)
    {
        scanf("%d",ptr2);
    }
    
    ptr2 = arr2+N-1;
    
    for (ptr1 = arr1;ptr1<arr1+N;ptr1++)
    {
        printf(" %d",*ptr1+ *(ptr2--));
    }
}
