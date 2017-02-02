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

    for(int i = 0; i < n - 1; i++){
        for(int j = 1; j < n; j++){
            if(arr[j - 1] > arr[j]){
                swap(arr[j - 1], arr[j]);
                j -= 2;
                iter++;
            }
        }
    }

    cout << endl << "iter: " << iter << "\n\n";
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
