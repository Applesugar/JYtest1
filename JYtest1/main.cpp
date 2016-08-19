#include<iostream>
#include<string>
#include<algorithm>

//using namespace std;
// we suppose that the input string only contains "0~9"and "."
std::string add(std::string a,std::string b)
{
	std::string sum;
	size_t a_length = a.length();
	size_t b_length = b.length();
//	std::cout << a_length << " " << b_length << std::endl;
	size_t a_dot_num = a.find_first_of('.');
	size_t b_dot_num = b.find_first_of('.');
//	std::cout << a_dot_num<<" "<<b_dot_num << std::endl;
	std::string a_int_part(a, 0, a_dot_num);
//	std::cout << a_int_part << std::endl;
	std::string a_decimal_part(a, a_dot_num + 1, a_length - a_dot_num);
//	std::cout << a_decimal_part << std::endl;
	std::string b_int_part(b, 0, b_dot_num);
	std::string b_decimal_part(b, b_dot_num + 1, b_length - b_dot_num);
	std::cout << b_int_part << std::endl;
	std::cout << b_decimal_part << std::endl;
	//to do: first to add the decimal part and then int part
	bool between = 0;
	size_t a_decimal_length = a_decimal_part.length();
	size_t b_decimal_length = b_decimal_part.length();
	std::string sum;
	if (a_decimal_length > b_decimal_length)
	{
		for (size_t i = a_decimal_length; i >= 0; --i)
		{
			if (i > b_decimal_length)
			{

			}
		}
	}
	else
	{

	}
	return sum;
}
std::string multiply(std::string a, std::string b)
{
	std::string dot;
	return dot;
}
//Maybe it is not necessary?
std::string convert(std::string input)
{
	std::string output;
	return output;
}
int main()
{
	std::string s;
	uint8_t n;
	add("123.45", "12345678.88");
	while (std::cin >> s >> n) 
	{
		std::string sum;
	}
	return 0;
}