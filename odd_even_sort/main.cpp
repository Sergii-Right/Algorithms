#include <stdio.h>

int main()
{
    int arr[] = {2,3,4,1,3,7,8,11,2,55,3,2,77,2,3,5};

    for(int i : arr){
        printf("%d, ", i);
    }
    printf("\n---------\n");

    int size_array = sizeof(arr)/sizeof(arr[0]);
    int a;
    int check = 0;
    int iter = 0;

    for(int i = 0; i < size_array; i++){
        for(int j = 1; j < size_array; j+=2){
            if(arr[j - 1] > arr[j]){
                a = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = a;
                check = 0;
            }
            iter++;
        }
        for(int j = 2; j < size_array; j+=2){
            if(arr[j - 1] > arr[j]){
                a = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = a;
                check = 0;
            }
            iter++;
        }
        check++;
        if(check == 2){
            break;
        }
    }

    printf("iter: %d\n",iter);
    printf("\n---------\n");
    for(int i : arr){
        printf("%d, ", i);
    }
    return 0;
}
