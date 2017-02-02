#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2,3,4,1,3,7,8,11,2,55,3,2,77,2,3,5};

    for(int i : arr){
        cout << i << " ";
    }
    cout << "\n ---------------\n";


    int n = sizeof(arr) / sizeof(int);
    int iter = 0;

    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
            iter++;
        }
        arr[j + 1] = key;
    }
    cout << endl << "iter: " << iter << "\n\n";
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
