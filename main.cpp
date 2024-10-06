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

// In the case you want to instantiate an object on the heap and have it automatically delted once out of scope,
// you can achieve this by using a unique_ptr (aka. Unique/Scoped Pointer). While the std library includes this,
// for this example, we will write our own

class ScopedPtr
{
    // "Hard coded to only accept Entities"
private:
    Entity *m_Ptr;

public:
    ScopedPtr(Entity *ptr)
        : m_Ptr(ptr)
    {
    }

    ~ScopedPtr()
    {
        delete m_Ptr;
    }
};

// End basic scoped pointer example code

int main()
{

    {
        // Empty Scope
        ScopedPtr e = new Entity(); // Instead of instantiating the heap Entity like before, we can use the ScopedPtr to make it automatically get destroyed once
                                    // outside the scope
    }

    std::cin.get();
}
