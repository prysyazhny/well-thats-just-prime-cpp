#include <vector>

std::vector<int> prime_factors(int n) {
    std::vector<int> factors;
    for (int i = 2; i <= n / i; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
 
}