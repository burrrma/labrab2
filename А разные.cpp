// laaaab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string> 
#include <set>
#include <iterator>

int main() {

    int dlina;
    std::cin >> dlina;
    std::set <int> numbers;

    for (int i = 0; i < dlina; i++) {
        int num;
        std::cin >> num;
        numbers.insert(num);
    }


    std::cout << numbers.size();
}

