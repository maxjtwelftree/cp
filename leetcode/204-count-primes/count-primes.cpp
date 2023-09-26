class Solution {
public:
// Whenever you need to count primes, just use Eratosthenes' Sieve
    int countPrimes(int n) {
        vector<bool> prime(n+1,true);
        prime[0]=prime[1]=false;
        int countPrimes = 0;
        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                countPrimes++; 
                for (int j = 2 * i; j < n; j += i) {
                    prime[j] = 0;
                }
            }
        }
        // Eratosthenes' Sieve
        // Eratosthenes' Sieve
        // Eratosthenes' Sieve
        return countPrimes;
    }
};
