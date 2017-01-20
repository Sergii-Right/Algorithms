#include <stdio.h>

int main(){
    int arr[] = {2,3,4,1,3,7,8,11,2,55,3,2,77,2,3,5};

    for(int i : arr){
        printf("%d, ", i);
    }
    printf("\n-------------\n");

    //start Stupid Sort version 1
//    int iter = 1;
//    int size_array = sizeof(arr) / sizeof(arr[0]);
//    while(true){
//        if(arr[iter] < arr[iter - 1]){
//            arr[iter] ^= (arr[iter-1] ^= arr[iter]);
//            arr[iter-1] ^= arr[iter];
//            iter = 1;
//        }
//        else{
//            iter++;
//        }
//        if(iter == size_array){
//            break;
//        }
//    }
    //stop

    //start Stupid Sort version 2
    int size_array = sizeof(arr) / sizeof(arr[0]);
    for(int i = 1; i <= size_array; ++i){
        if(arr[i] < arr[i - 1]){
            arr[i] ^= (arr[i-1] ^= arr[i]);
            arr[i-1] ^= arr[i];
            i = 0;
        }
    }
    //stop

    for(int i : arr){
        printf("%d, ", i);
    }
    printf("\n");

    return 0;
}
