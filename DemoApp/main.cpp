#include <iostream>
#include "Class.h"

int main()
{

    Class c;
    auto x = c.add(1, 2);

    std::cout << "Hello, World! x=" << x << std::endl;
    return 0;
}
