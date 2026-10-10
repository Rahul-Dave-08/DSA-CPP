
// CONQUER
void merge(int arr[], int s, int e, int mid)
{
    vector<int> temp;
    int i = s;
    int j = mid + 1;
    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }

    for (int idx = s, x = 0; idx <= e; idx++)
    {
        arr[idx] = temp[x++];
    }
}


void mergesort(int arr[], int s, int e)
{
    if (s == e)
    {
        return;
    }

    int mid = s + (e - s) / 2;
    // left
    mergesort(arr, s, mid);
    // right
    mergesort(arr, mid + 1, e);

    merge(arr, s, e, mid);
}

