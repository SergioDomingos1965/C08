// #include <iostream>
// #include <vector>

// int main()
// {
//     std::vector<int> numbers = {1, 100, 10 ,11};
//     std::cout <<"Numbers are: ";

//     for(auto &num: numbers)
//     {
//         std::cout << num <<std::endl;
//     }
//     return (0);
// }

// #include <iostream>
// #include <set>

// int main()
// {
//     std::set<int> numbers = {1, 100, 2 ,2, 1000};
//     std::cout <<"Numbers are: ";

//     for(auto &num: numbers)
//     {
//         std::cout <<num <<", ";
//     }
//     return (0);
// }

#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_set<int> numbers = {1, 100, 2, 4, 2};

    std::cout <<"Numbers are: ";

    for (auto &num: numbers)
    {
        std::cout << num << ",";
    }
    return (0);
}