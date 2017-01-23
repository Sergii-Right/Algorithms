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
    int iter = 0;

    for(int i = 0;  i < size_array - 1; i++){
        int max = size_array - 1 - i;
        int min = i;
        for(int j = i + 1; j < size_array - i; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
            if(arr[j] > arr[max]){
                max = j;
            }
            iter++;
        }
        a = arr[i];
        arr[i] = arr[min];
        arr[min] = a;

        a = arr[size_array - 1 - i];
        arr[size_array - 1 - i] = arr[max];
        arr[max] = a;
    }


    printf("iter: %d\n",iter);
    printf("\n---------\n");
    for(int i : arr){
        printf("%d, ", i);
    }

    return 0;
}
