#include <iostream>

// Object (Stack/Scope) Lifetimes in C++
//

class Entity
{
public:
    Entity()
    {
        std::cout << "Created Entity" << std::endl;
    }

    ~Entity()
    {
        std::cout << "Destroyed Entity" << std::endl;
    }
};

int main()
{

    {
        // Empty Scope
        Entity e;                  // Calling on the stack and will be deleted once outside the scope
        Entity *e2 = new Entity(); // Calling on the heap and won't be deleted until called or when the program exits
    }

    std::cin.get();
}
