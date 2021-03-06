#include <iostream>

using namespace std;

int Partition(int a[], int p, int r){
    int v = p, u = p;
    while (u < r) {
        if(a[u] < a[r]){
            swap(a[u], a[v++]);
        }
        u++;
    }
    swap(a[v], a[r]);
    return v;
}

void QuickSort(int a[], int p, int r){
    if(p >= r) return;
    int pr = Partition(a, p, r);
    QuickSort(a, p, pr - 1);
    QuickSort(a, pr + 1, r);
}

int main()
{
    int arr[] = {2,3,4,1,3,7,8,11,2,55,3,2,77,2,3,5};

    for(int i : arr){
        cout << i << " ";
    }
    cout << "\n ---------------\n";
    int n = sizeof(arr) / sizeof(int);

    QuickSort(arr, 0, n - 1);

    for(int i : arr){
        cout << i << " ";
    }
    cout << "\n ---------------\n";

    return 0;
}
