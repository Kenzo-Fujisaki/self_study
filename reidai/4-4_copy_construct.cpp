//例題4－4　コピーコンストラクタ

#include <iostream>

class Zahyo{
    int x;
    int y;
public:
    Zahyo(int in_x,int in_y);
    Zahyo(const Zahyo& obj);  //コピーコンストラクタ
    ~Zahyo(){};
    void show(){
        std::cout << "x =" << x  << " " << "y =" << y << std::endl;
        std::cout << " " << std::endl;
    }
};

Zahyo::Zahyo(int in_x,int in_y){
    std::cout << "オブジェクト生成" << std::endl;
    x = in_x;
    y = in_y;
}

Zahyo::Zahyo(const Zahyo& obj){
    std::cout << "コピーコンストラクタの呼び出し" << std::endl;
    x = obj.x;
    y = obj.y;
}

int main(){
    Zahyo point1(100,200);
    std::cout << "point1の初期値:";
    point1.show();
    Zahyo point2 = point1;
    std::cout << "point2の初期値:";
    point2.show();
    return 0;
}



