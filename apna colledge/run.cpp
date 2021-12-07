#include <iostream>
using namespace std;
int oddnum(int a)
{
    if (a == 1 || a == 0)
    {
        cout << "1" << endl;
        return 1;
    }

    int num = 2 + oddnum(a - 2);
    cout << num << endl;
    return num;
}
int sumofnum(int a)
{
    int num;
    if (a == 1)
    {

        return a;
    }

    num = a + sumofnum(a - 1);

    return num;
}
int main()
{
    int a;
    cin >> a;
    cout << sumofnum(a) << endl;

    return 0;
}

// // Merge sort

#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int j = 0, k = l, i = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {

        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {

        arr[k] = a[i];
        k++;
        i++;
    }

    void mergesort(int arr[], int l, int r)
    {
        if (r < l)
        {
            int mid = (r + l) / 2;
            mergesort(arr[], l, mid);
            mergesort(arr[], mid + 1, r);

            merge(arr, l, mid, r);
        }
    }

    int main()
    {
        int array[6] = {3, 9, 0, 1, 4, 5};
        mergesort(array, 0, 6);

        return 0;
    }