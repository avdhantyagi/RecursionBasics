#include <iostream>

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int BS(int* a, const int n, const int x){
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = (start + end)/2;
        if(a[mid] < x){
            start = mid + 1;
        }
        else if(a[mid] > x){
            end = mid - 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

void selectionSort(int a[], int n){
    for(int i=0; i<n;i++)
    {
        

        int cm = i;

        for(int j = i+1; j < n; j++){
            if(a[j] < a[cm])cm = j;
        }
        swap(a[i],a[cm]);
    }
}

void printArr(int *a, int n){
    for(int i = 0; i<n;i++){
        std::cout << a[i] << " ";
    }
}

int main(){
    int a[] = {3,5,1,2,7,0,1,2};
    selectionSort(a , 8);
    std::cout<<BS(a,8,2)<<"\n";
    printArr(a, 8);
}