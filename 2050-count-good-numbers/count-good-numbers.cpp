class Solution {
public:
    int countGoodNumbers(long long n) {
        long long result = modPow(20, n / 2); // Compute (20^(n/2)) % kMod
        if (n % 2 != 0) { 
            result = (result * 5) % MOD; // If n is odd, multiply by 5
        }
        return result;
    }
private:
  const int MOD = 1000000007; 
  long modPow(long x, long n) {
    if (n == 0)
      return 1;
    if (n % 2 == 1)
      return x * modPow(x, n - 1) % MOD;
    return modPow(x * x % MOD, n / 2);
  }
};