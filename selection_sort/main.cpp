#include <stdio.h>

int main(){
    int arr[] = {2,3,4,1,3,7,8,11,2,55,3,2,77,2,3,5};

    for(int i : arr){
        printf("%d, ", i);
    }
    printf("\n---------\n");

    int size_array = sizeof(arr)/sizeof(arr[0]);
    int a;
    bool check = true;
    int iter = 0;

    for (int i = 0; i < size_array; i++){
        for (int j = i + 1; j < size_array; j++){
            if(arr[i] > arr[j]){
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
            iter++;
        }
    }

    printf("iter: %d\n",iter);
    printf("\n---------\n");
    for(int i : arr){
        printf("%d, ", i);
    }

    return 0;
}
