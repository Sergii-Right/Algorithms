#include <stdio.h>

int main(int argc, char *argv[])
{
    int arr[] = {2,3,4,1,3,7,8,11,2,55,3,2,77,2,3,5};
    int size_array = sizeof(arr)/sizeof(arr[0]);
    int a;
    int iter = 0;
    bool check = true;

    for(int i : arr){
        printf("%d, ", i);
    }
    printf("\n---------\n");

    for(int i = 0; i < size_array; i++){
        for(int j = i + 1; j < size_array - i; j++){
            if(arr[j - 1] > arr[j]){
                a = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = a;
                check = false;
            }
            iter++;
        }
        if(check){
            break;
        }
        for(int j = size_array - i - 1; j > i; j--){
            if(arr[j - 1] > arr[j]){
                a = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = a;
                check = false;
            }
            iter++;
        }
        if(check){
            break;
        }
        check = true;
    }

    printf("iter: %d\n",iter);
    printf("\n---------\n");
    for(int i : arr){
        printf("%d, ", i);
    }

    return 0;
}
