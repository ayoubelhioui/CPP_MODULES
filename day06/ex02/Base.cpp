#include "Base.hpp"
#include "ClassC.hpp"
#include "ClassB.hpp"
#include "ClassA.hpp"

Base::~Base() {
    std::cout << "Base Destructor Called" << std::endl;
}

Base *generate(){
    srand(time(0));
    int randomNumber = rand() % 3;
    if (!randomNumber)
        return (new ClassA());
    else if (randomNumber == 1)
        return (new ClassB());
    return (new ClassC());
}

void identify(Base *p){
    if (dynamic_cast<ClassA*>(p))
        {std::cout << 'A' << std::endl; return; };
    if (dynamic_cast<ClassB*>(p))
        {std::cout << 'B' << std::endl; return; };
    if (dynamic_cast<ClassC*>(p))
        {std::cout << 'C' << std::endl; return;};
    std::cout << "Couldn't Cast" << std::endl;
}

void identify(Base &p){
    try{
        Base &a = dynamic_cast<ClassA&>(p);
        (void)a;
        std::cout << 'A' << std::endl;
    }
    catch(std::bad_cast &e){
        try{
            Base &a = dynamic_cast<ClassB&>(p);
            (void)a;
            std::cout << 'B' << std::endl;
        }
        catch (std::bad_cast &e)
        {
            try{
                Base &a = dynamic_cast<ClassC&>(p);
                (void)a;
                std::cout << 'C' << std::endl;
            }
            catch(std::bad_cast &e)
            {
                std::cout << e.what() << std::endl;
            }
        }
    }

}