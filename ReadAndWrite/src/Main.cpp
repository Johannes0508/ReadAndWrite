#include <iostream>

namespace lib {

	template < typename T>
	void print(T) 
	{
		std::cout << t << "\n";
	}

}


int main() 
{
	lib::print(123);
}