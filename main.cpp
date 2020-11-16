#include <iostream>

void Add()  {
double a;
double b;

std::cout << "What is your first Number to add\n";
std::cin >> a;

std::cout << "What is your seconed Number to add\n";
std::cin >> b;
double r = a + b;
std::cout << r;
}

void Subtract()  {
double a;
double b;

std::cout << "What is your first Number to subtract\n";
std::cin >> a;

std::cout << "What is your seconed Number to subtract\n";
std::cin >> b;
double r = a - b;
std::cout << r;
}

int main() {
  static std::string Choice;
  std::cout << "Do you want to add or subtract\n";
  std::cin >> Choice;

  if (Choice == "add" ) {
    Add();


  }
  else if (Choice == "subtract") {

    Subtract();

  }
  
  else {
    std::cout << "Did you type that right? Prosses Ending";

  return 0;
  }
}
