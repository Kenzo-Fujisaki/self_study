#include <iostream>

class Hello{
public:
    char *str;
    Hello(){
        str = "Hello \n";
    }
    Hello(const Hello &obj){
        str = "Goodbye \n";
    }
}g_obj;

int main(){
    Hello obj = g_obj;
    std::cout << g_obj.str;
    std::cout << obj.str;
    return 0;
}