#include <iostream>

using namespace std;

void Merge(int a[], int p, int q, int r){
    int *arr = new int[r - p + 1];
    int p1 = p, q1 = q + 1, i = 0;
    while(p1 <= q && q1 <= r)
        if(a[p1] < a[q1])
            arr[i++] = a[p1++];
        else
            arr[i++] = a[q1++];
    while (p1 <= q) arr[i++] = a[p1++];

    while (q1 <= r) arr[i++] = a[q1++];

    for(int i = 0; i <= r - p; i++){
        a[p + i] = arr[i];
    }
}

void Merge_Sort(int a[], int p, int r){
    if(p >= r){
        return;
    }
    int q = (p + r) / 2;
    Merge_Sort(a, p, q);
    Merge_Sort(a, q + 1, r);
    Merge(a, p, q, r);
}

int main()
{
    int arr[] = {2,3,4,1,3,7,8,11,2,55,3,2,77,2,3,5};

    for(int i : arr){
        cout << i << " ";
    }
    cout << "\n ---------------\n";
    int n = sizeof(arr) / sizeof(int);
//    int iter = 0;
    Merge_Sort(arr, 0, n - 1);

    for(int i : arr){
    cout << i << " ";
    }
    cout << "\n ---------------\n";
    return 0;
}
