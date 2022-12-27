#include "MutantStack.hpp"
#include <list>

template<typename T>
class test{
private :

public :
	test();
	void operator =(const T &oldObj){
        std::cout << oldObj.x << std::endl;
    };
};
//int main()
//{
//    MutantStack<int> mstack;
//    mstack.push(5);
//    mstack.push(17);
//    mstack.pop();
//    mstack.push(3);
//    mstack.push(5);
//    mstack.push(737);
//    for (size_t i = 2; i < 10000; i *= 2)
//        mstack.push(i);
//    MutantStack<int>::iterator it = mstack.dequeBegin();
//    MutantStack<int>::iterator ite = mstack.dequeEnd();
//    ++it;
//    --it;
//    while (it != ite)
//    {
//        std::cout << *it << std::endl;
//        ++it;
//    }
//    std::stack<int> s(mstack);
//    return 0;
//}
 int main()
 {
     std::list<int> mstack;
     mstack.push_back(5);
     mstack.push_back(17);
     mstack.pop_back();
     mstack.push_back(3);
     mstack.push_back(5);
     mstack.push_back(737);
     for (size_t i = 2; i < 10000; i *= 2)
         mstack.push_back(i);
     std::list<int>::iterator it = mstack.begin();
     std::list<int>::iterator ite = mstack.end();
     ++it;
     --it;
     while (it != ite)
     {
         std::cout << *it << std::endl;
         ++it;
     }
     std::list<int> s(mstack);
     return 0;
 }