#include <iostream>

class OuterClass {
public:
    int outerVar;

    class InnerClass {
    public:
        int innerVar;

        InnerClass(int innerValue) : innerVar(innerValue) {}

        void display() {
            std::cout << "InnerClass: innerVar = " << innerVar << std::endl;
        }
    };

    OuterClass(int outerValue) : outerVar(outerValue) {}

    void display() {
        std::cout << "OuterClass: outerVar = " << outerVar << std::endl;
    }
};

int main() {
    OuterClass outerObj(42);
    OuterClass::InnerClass innerObj(10);

    outerObj.display();
    innerObj.display();

    return 0;
}
