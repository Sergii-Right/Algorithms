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



    for(int i : arr){
        cout << i << " ";
    }
    cout << "\n ---------------\n";
    return 0;
}
