#include <iostream>

class Date{
private:
    int year;
    int month;
    int day;
    int thisYear;
    int age;
public:
    void inputDate();
    void inputThisYear();
    void calcage();
    void show();
};

void Date::inputDate(){
    std::cout << "生まれた西暦を入力してください";
    std::cin >> year;
    std::cout << "生まれた月を入力してください";
    std::cin >> month;
    std::cout << "生まれた日を入力してください";
    std::cin >> day;
}

void Date::inputThisYear(){
    std::cout << "今年は何年ですか？";
    std::cin >> thisYear;
}

void Date::calcage(){
    age = thisYear - year;
}

void Date::show(){
    std::cout << "あなたの誕生日は" << year << "年";
    std::cout << month << "月";
    std::cout << day << "日";
    std::cout << "年齢は" << age << "歳です" << std::endl;;
}

int main(){
    Date ichiro,hanako;
    ichiro.inputDate();
    ichiro.inputThisYear();
    ichiro.calcage();
    ichiro.show();

    hanako.inputDate();
    hanako.inputThisYear();
    hanako.calcage();
    hanako.show();

    return 0;
}