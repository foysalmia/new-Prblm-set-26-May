#include<stdio.h>

void swap(int*a,int*b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n,int a[])
{

    for(int steps = n-1; steps >=0; steps--)
    {
        int Max = a[steps],pos = steps;
        for (int i=steps; i>=0; i--)
        {
            if (a[i] > Max)
            {
                Max = a[i];
                pos = i;

            }

        }
        swap(&a[steps], &a[pos]);
        for(int i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");

    }



}

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    sort(n,arr);

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
