#include <stdio.h>

int main()
{
    int arr[50];
    int i, max, min, size;

    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements in the array: ", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=1; i<size; i++)
    {

        if(arr[i]>max)
        {
            max = arr[i];
        }

        if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}
