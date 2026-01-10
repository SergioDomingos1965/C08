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


#include <iostream>
#include <vector>

int main()
{
    std::vector <std::string> languages ={"c", "c++", "js"};
    std::vector <std::string>::iterator itr;

    itr = languages.begin();
    while(itr != languages.end())
    {
        std::cout <<*itr<<std::endl;
        itr++;
    }
    return (0);
}