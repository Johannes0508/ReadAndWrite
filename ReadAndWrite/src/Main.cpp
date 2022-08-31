#include <iostream>
#include <fstream>
#include <string>


namespace lib {

	template < typename T>
	void print(T t) 
	{
		std::cout << t << "\n";
	}

	void WriteToFile(std::string filePath)
	{
		std::ofstream file("filePath");
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();
	}

}


int main() 
{
	lib::print("hej");
	lib::WriteToFile("minfil.txt");

}