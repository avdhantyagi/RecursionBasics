#include <iostream>
using namespace std;

void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        std::cout << *arr << " ";
        arr++;
    }
}
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}


void selectionSort(int a[], int& n){
    for(int i=0; i<n;i++)
    {

        int cm = i;

        for(int j=i+1; j<n;j++)
            if(a[j]<a[cm])cm = j;

        swap(a[i], a[cm]);
    }
}

int main()
{
    int a[] = {3,5,1,2,7,0,1,2};
    int n=8;
    selectionSort(a, n);
    printArray(a, n);
}