#include <iostream>
#include <memory>

double square(const double& x) { return x * x; }

void increment(double* const pointer) { *pointer += 1.0; }

double return_increment(const double* const pointer) { return *pointer + 1.0; }

int main() {
  double x = 4.0;
  double* pointer_to_x = &x;
  std::cout << x << " " << pointer_to_x << "\n";
  x = 5.0;
  std::cout << x << " " << pointer_to_x << "\n";
  *pointer_to_x = 3.0;
  std::cout << x << " " << pointer_to_x << *pointer_to_x << "\n";

  std::cout << square(x) << "\n";
  std::cout << x << "\n";

  std::cout << "Return increment result: " << return_increment(pointer_to_x)
            << "\n";
  std::cout << x << "\n";

  increment(pointer_to_x);
  std::cout << x << "\n";

  return 0;
}
