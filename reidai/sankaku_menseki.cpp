#include <iostream>

class Sankakukei{
    int takasa;
    int teihen;
    int menseki;
public:
    void init();
    void calcArea();
    void show();
};

void Sankakukei::init(){
    takasa = 10;
    teihen = 5;
    menseki = 0;
}

void Sankakukei::calcArea(){
    menseki = teihen * takasa *1/2;
}

void Sankakukei::show(){
    std::cout << "三角形の高さ:" << takasa << std::endl;
    std::cout << "三角形の底辺:" << teihen << std::endl;
    std::cout << "三角形の面積:" << menseki << std::endl;
}

int main(){
    Sankakukei obj;
    obj.init();
    obj.calcArea();
    obj.show();
    return 0;
}