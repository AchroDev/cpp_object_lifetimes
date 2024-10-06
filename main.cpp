#include <iostream>

// Object (Stack/Scope) Lifetimes in C++
//

class Entity
{
    // Class Scope
private:
    int x;
};

int main()
{
    // Function scope

    if (true)
    {
        // If Scope
    }

    {
        // Empty Scope
    }

    std::cin.get();
}
