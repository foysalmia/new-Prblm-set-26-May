#include<stdio.h>
#include<stdbool.h>

bool is_sorted(int n,int a[])
{
    bool x = false;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]<a[i+1])
        {
            x = true;
        }
        else
        {
            x = false;
            break;
        }
    }
    return x;

}

void swap(int*a,int*b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n, int a[])
{
    for (int steps=0; steps<n; steps++)
    {
        for (int i=0; i+1<n; i++)
        {
            if (a[i] > a[i+1])
            {
                swap(&a[i], &a[i+1]);
            }
        }
    if (is_sorted(n, a))	break;

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

}
