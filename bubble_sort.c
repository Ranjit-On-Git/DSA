 #include <stdio.h>

void bubblesort(int array[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    printf("\nElements of array after sorting :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", array[i]);
    }
}

int main()
{
    int n, i, j;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int array[n];
    printf("\nEnter the %d Elements of array :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    bubblesort(array, n);

    return 0;
}