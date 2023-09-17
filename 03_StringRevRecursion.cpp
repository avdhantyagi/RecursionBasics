#include<iostream>
#include<string>

std::string reverse(std::string input){
    if(input == ""){
        return "";
    }

    return reverse(input.substr(1)) + input[0];
}


int main(){
    int a[] = {1,2,3};

    std::cout<<2[a];

}