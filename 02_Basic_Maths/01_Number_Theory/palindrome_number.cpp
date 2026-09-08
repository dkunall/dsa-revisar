// 1. Using reverse
bool isPalindrome(int n) {
    int original = n;
    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    return original == rev;
}
// 2. Using string
bool isPalindrome(int n) {
    string s = to_string(n);

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right])
            return false;

        left++;
        right--;
    }

    return true;
}
// 3. Recursive
bool isPalindrome(string &s, int left, int right) {
    if (left >= right)
        return true;

    if (s[left] != s[right])
        return false;

    return isPalindrome(s, left + 1, right - 1);
}
