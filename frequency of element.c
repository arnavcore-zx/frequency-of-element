#include <stdio.h>

int main()
{
    int a[50], n, i, num, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
            count++;
    }

    printf("Frequency = %d", count);

    return 0;
}
