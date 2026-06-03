#include <iostream>
#include <memory>

int main(){
    //所有権独立型スマートポインタ
    std::unique_ptr<int> smartPtr = std::make_unique<int>(999);

    std::cout << "スマートポインタの値:" << *smartPtr << std::endl;

    return 0;
}
