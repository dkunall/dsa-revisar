// 1. Brute Force
int gcd(int a, int b) {
    for (int i = min(a, b); i >= 1; i--) {
        if (a % i == 0 && b % i == 0)
            return i;
    }
    return 1;
}
// 2. Subtraction - Iterative
int gcd(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}
// 3. Euclidean Algorithm - Iterative
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// 4. Euclidean Algorithm - Recursive
int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
