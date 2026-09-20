#include<stdio.h>

void insertionSort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

int partition(int a[],int low,int high)
{
    int pivot=a[high];
    int i=low-1;
    int j,temp;
    for(j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[high];
    a[high]=temp;
    return i+1;
}

void quickSort(int a[],int low,int high)
{
    int p;
    if(low<high)
    {
        p=partition(a,low,high);
        quickSort(a,low,p-1);
        quickSort(a,p+1,high);
    }
}

void merge(int a[],int low,int mid,int high)
{
    int temp[20];
    int i=low;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=mid)
        temp[k++]=a[i++];
    while(j<=high)
        temp[k++]=a[j++];
    for(i=low,k=0;i<=high;i++,k++)
        a[i]=temp[k];
}
void mergeSort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

int main()
{
    int a1[]={750,250,900,450,120,600,300};
    int a2[]={750,250,900,450,120,600,300};
    int a3[]={750,250,900,450,120,600,300};

    int n=7;

    printf("Original Prices:\n");
    display(a1,n);

    insertionSort(a1,n);
    printf("\nInsertion Sort:\n");
    display(a1,n);

    quickSort(a2,0,n-1);
    printf("\nQuick Sort:\n");
    display(a2,n);

    mergeSort(a3,0,n-1);
    printf("\nMerge Sort:\n");
    display(a3,n);

    return 0;
}
