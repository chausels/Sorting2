#include <iostream>

class MyClass {
public:
    int data;

    void printData() {
        std::cout << data << std::endl; // Прямой доступ
    }
};

int main() {
    MyClass obj;
    obj.data = 20;
    obj.printData(); // Вывод: 20
    return 0;
}
