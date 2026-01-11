#include "Span.hpp"

Span::Span(unsigned int n) { this->n = n; }

Span::Span(const Span &other) { this->n = other.n ;}

Span &Span::operator=(const Span &other) {
  if (this != &other)
    this->n = other.n;
  return *this;
}

Span::~Span() { std::cout << "Destructor Called ." << std::endl; }

int Span::get_number() { return this->n; }
void Span::addNumber(int n) {
  int i = 0;
  i++;
  if (this->n == 0)
    throw std::runtime_error("error with size ");
  this->numbers.push_back(n);
  this->n--;
}

void Span::print() {
  std::vector<int>::iterator i;
  i = this->numbers.begin();
  while (i != numbers.end()) {
    std::cout << *i << std::endl;
    i++;
  }
}

int Span::longestSpan() {
  if (this->numbers.empty())
    throw std::runtime_error("container empty ... ");
  if (this->numbers.size() == 1)
    throw std::runtime_error("The container contains only one element.  ... ");
  std::vector<int>::iterator max =
      std::max_element(this->numbers.begin(), this->numbers.end());
  std::vector<int>::iterator min =
      std::min_element(this->numbers.begin(), numbers.end());
  return *max - *min;
}

int Span::shortestSpan() {
  int i = 0;
  int rest = 0;
  int a = numbers.size();
  if (this->numbers.empty()) {
     throw std::runtime_error("The container is empty... ");
    exit(1);
  }

  if (this->numbers.size() == 1) 
        throw std::runtime_error("The container contains only one element");
  std::sort(this->numbers.begin(), this->numbers.end());
  std::vector<int> v;
  while (i < a - 1) {
    rest = numbers[i + 1] - numbers[i];
    v.push_back(rest);
    i++;
  }
  std::vector<int>::iterator min = std::min_element(v.begin(), v.end());
  return *min;
}