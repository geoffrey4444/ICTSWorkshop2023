#include <cmath>
#include <cstddef>
#include <stdio.h>

template <typename T>
double apply_n_times(const double initial_value, const size_t n, T func) {
  double result = initial_value;
  for (size_t i = 0; i < n; ++i) {
    result = func(result);
  }
  return result;
}

int main() {
  const double cos1k =
      apply_n_times(4.5, 10000, [](const double x) { return cos(x); });
  printf("%1.15f\n", cos1k);

  const double factor = 10;
  const double cos1k_times_1e6 =
      apply_n_times(cos1k, 6, [&factor](const double x) { return factor * x; });
  printf("%1.15f\n", cos1k_times_1e6);

  return 0;
}