#include <iostream>

class Sankakukei{
    int teihen;
    int takasa;
    int menseki;
public:
    Sankakukei();
    ~Sankakukei();
    void calcArea();
    void show();
};

Sankakukei::Sankakukei(){
    takasa = 10;
    teihen = 5;
    menseki = 0;
}

Sankakukei::~Sankakukei(){
    std::cout << "オブジェクトは消えました" << std::endl;
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
    std::cout << "データを初期化しました" << std::endl;
    obj.calcArea();
    obj.show();
    return 0;
}