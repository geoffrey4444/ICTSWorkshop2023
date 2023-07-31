#include <array>
#include <cmath>
#include <unordered_set>
#include <vector>
#include <optional>
#include <stdio.h>

int main() {
  printf("%1.15f %1.15f\n", sqrt(2.0), sin(M_PI / 2.0));

  std::array<double, 3> x_array{{1.0, 4.0, 9.0}};
  printf("x_array[2]: %1.15f\n", x_array[2]);
  x_array[1] = -4.0;
  printf("x_array[1] after edit: %1.15f\n", x_array[2]);

  std::vector<double> x_vector{{1.0, 4.0, 9.0}};
  x_vector.push_back(4.0);
  printf("x_vector: ");
  for (double number : x_vector) {
    printf("%1.15f ", number);
  }
  printf("\n");

  std::unordered_set<double> x_set{{1.0, 4.0, 9.0}};
  x_set.insert(16.0);
  x_set.insert(4.0);
  printf("x_unorderedset: ");
  for (double number : x_set) {
    printf("%1.15f ", number);
  }
  printf("\n");

  std::optional<int> x{};
  if (x) {
    printf("%d\n", *x);
  } else {
    printf("Optional x is undefined\n");
  }
  x = 5;
  if (x) {
    printf("%d\n", *x);
  } else {
    printf("Optional x is undefined\n");
  }
  x = std::nullopt;
  if (x) {
    printf("%d\n", *x);
  } else {
    printf("Optional x is undefined\n");
  }

  return 0;
}
