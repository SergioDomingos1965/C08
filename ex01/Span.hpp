#ifndef SPAN_H
#define SPAN_H
#include <algorithm>
#include <iostream>
#include <vector>

class Span {
private:
  int n;
  std::vector<int> numbers;

public:
  Span(unsigned int n);
  Span(const Span &other);
  Span &operator=(const Span &other);
  ~Span();
  void addNumber(int n);
  template <typename iterator>
  void add_range_number(iterator begin, iterator end) {
    for (iterator it = begin; it != end; it++) {
      int a = numbers.size();
      if (a > n) {
        std::cout << "Error: Size" << std::endl;
        exit(0);
      }
      numbers.push_back(*it);
    }
  }
  int shortestSpan();
  int longestSpan();
  int get_number();
  void print();
};
#endif