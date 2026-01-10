#include "easyfind.hpp"
int main()
{
    try
    {
        std::vector<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        std::vector<int>::iterator i = easyfind(numbers, 10);
        std::cout <<"Value founf: "<< * i <<std::endl;

        std::vector<int>::iterator it = numbers.begin();
        while(it != numbers.end())
        {
            std::cout <<*it<<std::endl;
            it++;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}