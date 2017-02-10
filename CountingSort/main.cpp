#include <iostream>

using namespace std;

int main()
{
    int arr[] = {2,3,4,1,3,7,8,11,2,5,3,2,2,3,5};

    for(int i : arr){
        cout << i << " ";
    }
    cout << "\n ---------------\n";
    int n = sizeof(arr) / sizeof(int);
    int m = 12;
    int *b = new int[n];
    int *less = new int[m];
    int *equal = new int[m];
    for(int i = 0; i < m; i++){
        equal[i] = 0;
    }
    for(int i = 0; i < n; i++){
        equal[arr[i]]++;
    }

    less[0] = 0;
    for(int i = 1; i < m; i++){
        less[i] = less[i - 1] + equal[i - 1];
    }

    for(int i = 0; i < n; i++){
        int key = arr[i];
        b[less[key]++] = key;
    }

    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
    }
    cout << "\n ---------------\n";
    return 0;
}
