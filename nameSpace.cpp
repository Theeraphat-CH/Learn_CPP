#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {
    using namespace first;

    std::cout << "Value Is " << x;
    //std::cout << "Value Is " << first::x;
    //std::cout << "Value Is " << second::x;

    return 0;
}