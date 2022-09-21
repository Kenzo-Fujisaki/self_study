#include <iostream>

class Hito{
private:
    char name[20];
    int toshi;
    char syumi[20];
public:
    void input();
    void show();
};

void Hito::input(){
    std::cout << "名前を入力してください：";
    std::cin >> name;
    std::cout << "年齢を入力してください：";
    std::cin >> toshi;
    std::cout << "趣味を入力してください：";
    std::cin >> syumi;
}

void Hito::show(){
    std::cout << "名前：" << name << std::endl;
    std::cout << "年齢：" << toshi <<std::endl;
    std::cout << "趣味：" << syumi <<std::endl;
}

int main(){
    Hito h_obj;
    h_obj.input();
    h_obj.show();
    return 0;
}