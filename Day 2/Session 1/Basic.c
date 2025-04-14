#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int mx = arr[0];
    int smx = arr[0];
    for (int i = 0; i < 5; i++){
        if (arr[i] > mx){
            mx = arr[i];
        }
    }
    for (int i = 0; i < 5; i++){
        if (arr[i] > smx && arr[i] != mx){
            smx = arr[i];
        }
    }
    printf("Second Maximu element : %d",smx);
    return 0;
}