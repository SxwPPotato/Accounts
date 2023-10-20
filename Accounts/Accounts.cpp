#include <iostream>
#include <string>
#include<Windows.h>

struct Accounts {
    int numberacc = 0;
    std::string name;
    double count_money = 0;
};

void Cinacc(Accounts & account) {
    std::cout << "Введите номер акаунта: ";
    std::cin >> account.numberacc;
    std::cout << "Введите имя акаунта: ";
    std::cin >> account.name;
    std::cout << "Введите баланс акаунта: ";
    std::cin >> account.count_money;
    std::cout << "Введите новый баланс акаунта: ";
    std::cin >> account.count_money;


};

void Showacc(Accounts& account){
    std::cout << "Ваш счет: " << account.numberacc << ", " << account.name << ", " << account.count_money;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Accounts account;
    Cinacc(account);
    Showacc(account);
   
    return 0;
}
