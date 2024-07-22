#include <iostream>
#include <memory>
#include <vector>

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
    std::vector<std::unique_ptr<Animal>> animals;
    animals.emplace_back(std::make_unique<Dog>());
    animals.emplace_back(std::make_unique<Sheep>());
    animals.emplace_back(std::make_unique<Lion>());

    for(const auto& animal : animals)
    {
        animal->MakeSound();
    }
}