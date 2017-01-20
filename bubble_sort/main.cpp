#include <stdio.h>

int main()
{
    int arr[] = {2,3,4,1,3,7,8,11,2,55,3,2,77,2,3,5};

    for(int i : arr){
        printf("%d, ", i);
    }
    printf("\n---------\n");

    //start Bubble Sort
    int size_array = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size_array; ++i){
        for(int j = 1; j < size_array - i; ++j){
            if(arr[j-1] > arr[j]){
                arr[j-1] ^= (arr[j] ^= arr[j-1]);
                arr[j] ^= arr[j-1];
            }
        }
    }
    //stop

    for(int i : arr){
        printf("%d, ", i);
    }

    return 0;
}
