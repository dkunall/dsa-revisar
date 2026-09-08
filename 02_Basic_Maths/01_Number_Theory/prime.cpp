// 1. Brute Force
bool isPrime(int n) {
    if (n < 2)
        return false;

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }

    return count == 2;
}
// 2. Optimized - O(n)
bool isPrime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}
// 3. Optimized - O(sqrt(n)) ⭐
bool isPrime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}
// 4. Recursive
bool isPrime(int n, int i = 2) {
    if (n < 2)
        return false;

    if (i * i > n)
        return true;

    if (n % i == 0)
        return false;

    return isPrime(n, i + 1);
}
