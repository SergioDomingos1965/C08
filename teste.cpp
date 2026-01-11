//#include <iostream>
//#include <vector>

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


// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main() {

//   // initialize an unordered_set of int type
//   unordered_set<int> numbers = {1, 100, 10, 70, 100};

//   // print the set
//   cout << "Numbers are: ";
  
//   for(auto &num: numbers) {
//     cout << num << ", ";
//   }
//   int a;
//   return 0;
// }

// #include <iostream>
// #include  <stack>

// int main()
// {
//     std::stack <int> numbers;
//     numbers.push(1);
//     numbers.push(2);
//     numbers.push(3);

//     std::cout <<"Numbers are: "<<std::endl;
//     while(numbers.empty())
//     {
//             std::cout <<numbers.top()<<std::endl;
//             numbers.pop();
//     }
//     return (0);
// }


// #include <iostream>
// #include <vector>

// int main()
// {
//     std::vector <std::string> languages ={"c", "c++", "js"};
//     std::vector <std::string>::iterator itr;

//     itr = languages.begin();
//     while(itr != languages.end())
//     {
//         std::cout <<*itr<<std::endl;
//         itr++;
//     }
//     return (0);
// }

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{ 
    int a = 10, b = 1;
    
    std::cout <<"Minimo entre " << a << "e " <<b << " : " << std::min(a, b)  << std::endl;
    std::vector<int> numbers ={1, 2, 3, 4};

    auto it_min = std::min_element(numbers.begin(), numbers.end());
    auto it_max = std::max_element(numbers.begin(), numbers.end());
    std::cout <<"Minino do container: "<< *it_min <<std::endl;
    std::cout <<"Maximo do container: "<<*it_max <<std::endl;

    std::cout <<"Usando minmax_element "<<std::endl;

    auto par_minmax = std::minmax_element(numbers.begin(), numbers.end());
    std::cout << *par_minmax.first<<std::endl;
    std::cout << *par_minmax.second<<std::endl;

    return (0);
}