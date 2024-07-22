#include <iostream>
#include <array>
#include <memory>

class Animal
{
public:

    virtual ~Animal()
    {}

    virtual void MakeSound() const = 0;
};

class Dog : public Animal
{
public:
    
    virtual ~Dog()
    {}

    void MakeSound() const override
    {
        std::cout << "Woof" << std::endl;
    }
};

class Sheep : public Animal
{
public:

    virtual ~Sheep()
    {}

    void MakeSound() const override
    {
        std::cout << "Baaa" << std::endl;
    }
};


class Lion : public Animal
{
public:

    virtual ~Lion()
    {}

    void MakeSound() const override
    {
        std::cout << "Roar" << std::endl;
    }
};
int main(int argc, char* argv[])
{
    std::array<std::unique_ptr<Animal>, 3> animals = 
    {
        std::make_unique<Dog>(),
        std::make_unique<Sheep>(),
        std::make_unique<Lion>()
    };

    for(const auto& animal : animals)
    {
        animal->MakeSound();
    }
}