#include <iostream>
using namespace std;

class a{
public:
    ~a(){
        cout << "destructor" << endl;
    }
public:
    static int b;
};
void f()
{
    if (1)
        a b;
    cout << "shit" << endl;
}

int main()
{
   f();
   cout << "after destructor" << endl;
}