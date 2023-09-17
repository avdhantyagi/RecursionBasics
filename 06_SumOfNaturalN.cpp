#include<iostream>

int sumOfN(int n, int sum){
    if (n == 1){
        return sum + 1;
    }
    sum = sum + n;
    return sumOfN(n-1,sum);
}

int sumOfN(int n){
    if(n == 1){
        return 1;
    }
    return n+sumOfN(n-1);
}

int main(){
    int n = 11;
    std::cout << "Sum of N is: "<< sumOfN(n,0)<<"\n";
    std::cout << "Sum of N is: "<< sumOfN(n)<<"\n";
}