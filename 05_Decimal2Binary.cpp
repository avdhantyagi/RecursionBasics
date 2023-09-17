#include <iostream>
#include <string>

std::string decimalToBinary(int a, std::string result) {
    if (a == 1) {
        return std::to_string(1)+result;
    }
    result = std::to_string(a%2) + result;
    return decimalToBinary(a / 2, result);
}

std::string decimalToBinary(int a) {
    if (a == 1) {
        return "1";
    }
    return decimalToBinary(a / 2) + std::to_string(a % 2);
}

int main(){
    std::cout<<decimalToBinary(8,"")<<"\n";
    std::cout<<decimalToBinary(8)<<"\n";
}