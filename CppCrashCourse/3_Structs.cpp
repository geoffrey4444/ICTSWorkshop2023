#include <cstddef>
#include <stdio.h>

template <typename T>
struct RegularPolygon {
  size_t number_of_sides_;
  T side_length_;
  RegularPolygon(const size_t n, const T& length)
      : number_of_sides_(n), side_length_(length) {}
  T perimeter() { return side_length_ * number_of_sides_; }
};

template <typename T>
struct Square : RegularPolygon<T> {
  Square(const size_t n, const T& length) : RegularPolygon<T>(n, length) {}
  T area() {
    return RegularPolygon<T>::side_length_ * RegularPolygon<T>::side_length_;
  }
};

int main() {
  constexpr double x{4.0};
  printf("The number is %1.2f\n", x);

  RegularPolygon<double> triangle{3, 4.0};
  printf("Polygon perimeter: %1.2f\n", triangle.perimeter());
  RegularPolygon<size_t> hex{3, 4};
  printf("Polygon perimeter: %lu\n", hex.perimeter());

  Square<double> square{7, 8.0};
  printf("Square perimeter: %1.2f area: %1.2f\n", square.perimeter(),
         square.area());
  return 0;
}
