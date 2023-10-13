#include <iostream>

int SumArr(int arr[], int n){
    if (n <= 0){
        return arr[0];
    }
    return arr[n]+SumArr(arr, n-1);
}
int SumArrF(int arr[], int n, int t=0){
    if (n <= 0){
        return t + arr[0];
    }
    t = t + arr[n];
    return SumArrF(arr, n-1, t);
}

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    std::cout<<SumArrF(array, 9);
}