#include<iostream>

int power(int a, int n, int x = 1){
    if (n < 1){
        return x;
    }
    x = a*x;
    return power(a,n-1,x);
}

int power2(int a, int n){
    if (n < 1){
        return 1;
    }
    return a*power(a,n-1);
}

int main(){
    std::cout << power(2,28);
}