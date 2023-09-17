#include <iostream>

int binarySearch(int arr[], int right, int x, int left = 0){
    if (left > right){
        return -1;
    }
    int mid = (left+right)/2;
    if (arr[mid] == x) {
        return mid;
    }
    if(arr[mid]>x){
        return binarySearch(arr, mid-1 , x, left);
    }
    return binarySearch(arr, right , x, mid+1);
}

int main(){
    int arr[] = {2,4,66,77,890};
    std::cout<<binarySearch(arr,4,77);
}