void quicksort(int a[], int be, int en)
{
    int i=be,j=en,pivot=a[(be+en)/2];
    while(i<=j)
    {
        while(i<=j && a[i]<pivot)
            i++;
        while(i<=j && a[j]>pivot)
            j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if(be<j)
        quicksort(a,be,j);
    if(i<en)
        quicksort(a,i,en);
}

//quick sort(a,0,n-1);
