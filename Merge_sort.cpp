void mrg(int a[],int be,int mid,int en)
{
    int b[100000];
    int i=be,j=mid+1,k=0;
    while (i<=mid && j<=en)
        if (a[i]<=a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    for (;i<=mid;i++)
        b[k++]=a[i];
    for (;j<=en;j++)
        b[k++]=a[j];
    for (i=0;i<k;i++)
        a[be++]=b[i];
}

void merge_sort(int a[],int be,int en)
{
    if (be<en)
    {
        int mid=(be+en)/2;
        merge_sort(a,be,mid);
        merge_sort(a,mid+1,en);
        mrg(a,be,mid,en);
    }
}

//merge_sort(a,0,n-1);
