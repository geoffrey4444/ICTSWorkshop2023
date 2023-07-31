#include <stdio.h>
#include <type_traits>

namespace tmpl {
template <typename...>
struct list {};
}  // namespace tmpl

template <typename...>
struct TypeDisplayer;

template <size_t X>
struct Number {};

template <size_t X, size_t Y>
struct Sum {
  using result = Number<X + Y>;
};

template <size_t X, size_t Y>
struct Product {
  using result = Number<X * Y>;
};

template <size_t X>
struct Square {
  static constexpr size_t result{X * X};
};

int main() {
  using list_of_numbers =
      tmpl::list<Sum<4, 5>, Sum<4, 5>::result, Product<3, 4>::result,
                 Number<Square<10>::result>>;
  TypeDisplayer<list_of_numbers> for_type_printing;
  return 0;
}