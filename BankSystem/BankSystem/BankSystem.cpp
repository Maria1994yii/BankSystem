// BankSystem.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class BankSystem {
private:
    int money;
    int account_number;
    std::string costomer;

public:
    void creat_account()
    {
        std::cout << "Enter the number No: \n";
        std::cin >> account_number;
        std::cout << "Enter the name of the account holder \n";
        std::cin >> costomer;
        std::cout << "Enter the initial amount\n";
        std::cin >> money;
        std::cout << "\n Account created";
    }
    void show_account()
    {
        std::cout << " Account Number No: " << account_number;
        std::cout << "\n Account Holder Name: " << costomer;
        std::cout << "\n Balance amount : " << money;
    }
    void withdrew(int x)
    {
        money -= x;
    }
    void deposit(int x)
    {
        money += x;
    }
};

int main()
{
    BankSystem client;
    client.creat_account();
    client.show_account();
    client.deposit(1000);
    client.show_account();
    client.withdrew(300);
    client.show_account();
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
