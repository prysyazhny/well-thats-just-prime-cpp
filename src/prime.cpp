#include <string>

std::string prime() {
   return "You can delete this function and replace it with your own!";
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
