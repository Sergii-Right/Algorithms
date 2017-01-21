#include <stdio.h>
#include <ctime>
#include <cstdlib>

int main()
{
    int arr[] = {2,3,4,1,3,7,8,3};
    int size_array = sizeof(arr)/sizeof(arr[0]);

    for(int i : arr){
        printf("%d, ", i);
    }
    printf("\n---------\n");

    srand(time(0));
    int rand_index = 0;
    bool ok = true;
    int iter = 0;
    int a;
    while(true){
        ok = true;
        for(int i = 0; i < size_array; i++){
            rand_index = rand() % (size_array - 1);
            a = arr[i];
            arr[i] = arr[rand_index];
            arr[rand_index] = a;
            iter++;
        }
        for(int i = 1; i < size_array; i++){
            iter++;
            if(arr[i-1] > arr[i]){
                ok = false;
                break;
            }
        }
        if(ok){
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
