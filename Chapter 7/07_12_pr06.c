#include <stdio.h>
int pos(int arr[], int size){
    int count = 0;
    for(int i = 0; i<size; i++){
        if(arr[i]>0){
            count++;
        }
    }
}
int main (){
    int array[] = {3, 2, 7, 5, 4, 6, 8};
    int size = sizeof(array)/ sizeof(array[0]);
    int con = pos(array, size);
    printf("The number of positive integers in an array is: %d\n", con);
    return 0;
}