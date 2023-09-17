#include <iostream>
#include <string>

using namespace std;

bool palin(std::string inp){
    if(inp.length() == 0 || inp.length() == 1){
        return true;
    }
    else if(inp[0] == inp[(inp.length() - 1) ]){
        return palin(inp.substr(1,inp.length()-2));
    }

    return false;

}

int main(){
    std::string a = "asdfghjkllkjhgfdsa";
    std::cout<<palin(a);
}

