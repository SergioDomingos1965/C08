#include "Span.hpp"

int main() {

  try {

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout <<"Outros testes ... "<<std::endl;
    int c = 0;
    std::cin >> c; 

    Span s(10000);
    int i = 0;
    std::vector<int> v;

    while (i < 10000) {
      v.push_back(i);
      i++;
    }
    s.add_range_number(v.begin(), v.end());
    s.print();
    std::cout << s.longestSpan() << std::endl;
    std::cout << s.shortestSpan() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }

  return (0);
}