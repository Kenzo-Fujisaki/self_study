//例題4－3　デフォルト引数付きコンストラクタ

#include <iostream>
#include <cstring>

class Person{
    char name[40];
    int age;
public:
    Person(char* in_name = "源義経",int in_age = 25);
    ~Person(){
        std::cout << "オブジェクト消失" << std::endl;
    };
    void show();
};

Person::Person(char* in_name,int in_age){
    std::strcpy(name, in_name);
    if(in_age < 0){
        age = 0;
    }
    else{
        age = in_age;
    }
}

void Person::show(){
    std::cout << "名前" << name << std::endl;
    std::cout << "年齢" << age << std::endl;
}

int main(){
    Person man1;
    Person man2("静",20);
    Person man3("源頼朝");
    Person man4 = Person("弁慶", 28);
    man1.show();
    man2.show();
    man3.show();
    man4.show();
    return 0;
}