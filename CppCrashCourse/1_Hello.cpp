#include <cmath>
#include <cstddef>
#include <stdio.h>
#include <string>

double distance_2d(const double length, const double width) {
  return sqrt(length * length + width * width);
}

int main() {
  constexpr double length = 3.0;
  constexpr double width = 4.0;
  constexpr double some_fraction{1./3.};
  const std::string hello{"Hello, world!"};
  // const double distance = distance_2d(length, width);
  const auto distance = distance_2d(length, width);
  printf("%s Fraction: %1.4f Dist: %1.2f\n", hello.c_str(), 
         some_fraction, distance);

  if (length < width) {
    printf("Length < width\n");
  } else {
    printf("Length >= width\n");
  }
  printf(length > width ? "Length > width\n" : "Width > Length\n");
  for (size_t i = 0; i < 10; ++i) {
    printf("%lu\n", i*i);
  }

  return 0;
}
