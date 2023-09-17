#include <iostream>

void swap(int &a, int&b){
    int temp = a;
    a = b;
    b = temp;
}

int findMin(int arr[], int start, int end){
    int min = start;

    for(int i = start+1; i<= end; i++){
        if(arr[min]>arr[i]){
            min = i;
        }
    }
    return min;
}

void selectionSort(int arr[], int start, int end){
    if(start == end){
        return;
    }
    int min = findMin(arr,start,end);
    if(min != start){
        std::swap(arr[min],arr[start]);
    }
    return selectionSort(arr,start+1,end);
}

int main(){
    int a[] = {3,5,1,2,7,0,1,2};
    selectionSort(a,0,7);
    int size = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}