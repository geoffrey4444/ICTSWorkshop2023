#include <cstddef>
#include <random>
#include <stdio.h>

int main() {
  std::random_device device;
  std::mt19937_64 gen(device());
  std::uniform_real_distribution dist{0.0, 1.0};

  constexpr size_t darts_to_throw = 1000;
  size_t hits = 0;
  for (size_t i = 0; i < darts_to_throw; ++i) {
    const double x = dist(gen);
    const double y = dist(gen);
    if (x * x + y * y < 1) {
      hits += 1;
    }
  }

  const double pi =
      4.0 * static_cast<double>(hits) / static_cast<double>(darts_to_throw);
  printf("Hits: %lu Throws: %lu Pi Estimate: %1.15f\n", hits, darts_to_throw, pi);

  return 0;
}
