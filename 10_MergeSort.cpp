#include <iostream>

void printArr(int *a, int n, std::string message){
    std::cout<<message<<"\n";
    for(int i = 0; i<n;i++){
        std::cout << a[i] << " ";
    }
    std::cout<<'\n';
}
void merge(int arr[], int start, int mid, int end){
    int temp[end - start + 1];
    int i = start, j = mid+1, k=0;
    while (i <= mid && j<= end){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i<=mid){
        temp[k++] = arr[i++];
    }
    while (j<=end){
        temp[k++] = arr[j++];
    }
    
    for(int i = start;i <=end;i++){
        arr[i] = temp[i-start];
    }
}

void mergeSort(int arr[], int start, int end){
    if(start<end){
        int mid = (start+end)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
        std::cout<<"\n\n";
    }
}


int main(){
    int arr[] = {4,1,5,2,3,6};
    mergeSort(arr,0,4);
    printArr(arr, 5,"final");
}