#include <iostream>

class test{
	private:
		int a;
	public:
		int b;
	int c;
};

void	increment(int &a)
{
	a++;
}
int main()
{
	int a = 10;
	std::cout << a << std::endl;
	increment(a);
	std::cout << a;
	test t;
}