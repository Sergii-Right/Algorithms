#include <stdio.h>
#include <algorithm>

int* bubble_sort(int *arr, int arr_size, int *iter){
    bool check = true;

    for(int i = 0; i < arr_size - 1; i++){
        for(int j = 1; j < arr_size - i; j++){
            *iter += 1;
            if(arr[j - 1] > arr[j]){
                std::swap(arr[j - 1], arr[j]);
                check = false;
            }
        }
        if(check){
            break;
        }
        check = true;
    }
    return arr;
}

int main()
{
    int arr[] = {2,3,4,1,3,7,8,11,2,55,3,2,77,2,3,5};

    for(int i : arr){
        printf("%d, ", i);
    }
    printf("\n---------\n");
    int iterator = 0;
    int size_array = sizeof(arr)/sizeof(arr[0]);


    bool check = true;
    int v = size_array - 1;
    while (check) {
        for(int i = 0; i < size_array; i+=v){
            if(arr[i] > arr[v]){
                std::swap(arr[i], arr[v]);
            }
            iterator++;
        }
        v = v / 1.247;
        if(v == 1){
            break;
        }
    }

    int * a = bubble_sort(arr, size_array, &iterator);

    printf("iterator : %d\n--------\n", iterator);
    for(int i = 0; i < size_array; i++){
        printf("%d, ", a[i]);
    }

    return 0;
}
