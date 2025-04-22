class Solution {
public:
    const int MOD = 1e9 + 7;
    const int MAXN = 20010;  // n + maxValue can go up to ~20000

    vector<long long> fact, invfact;

    long long modpow(long long a, int b) {
        long long res = 1;
        while (b) {
            if (b % 2) res = res * a % MOD;
            a = a * a % MOD;
            b /= 2;
        }
        return res;
    }

    void init_factorials(int limit) {
        fact.resize(limit + 1);
        invfact.resize(limit + 1);
        fact[0] = 1;
        for (int i = 1; i <= limit; ++i)
            fact[i] = fact[i - 1] * i % MOD;
        invfact[limit] = modpow(fact[limit], MOD - 2);
        for (int i = limit - 1; i >= 0; --i)
            invfact[i] = invfact[i + 1] * (i + 1) % MOD;
    }

    long long comb(int n, int k) {
        if (k < 0 || k > n) return 0;
        return fact[n] * invfact[k] % MOD * invfact[n - k] % MOD;
    }

    int idealArrays(int n, int maxValue) {
        init_factorials(n + 100);  // Enough for n + exponent sum

        // dp[i] = number of ideal arrays ending with number i
        vector<int> cnt(maxValue + 1, 0);
        long long res = 0;

        for (int i = 1; i <= maxValue; ++i) {
            int num = i;
            map<int, int> prime_factors;
            for (int p = 2; p * p <= num; ++p) {
                while (num % p == 0) {
                    prime_factors[p]++;
                    num /= p;
                }
            }
            if (num > 1) prime_factors[num]++;

            int sum_exp = 0;
            long long ways = 1;
            for (auto [prime, exp] : prime_factors) {
                sum_exp += exp;
                ways = ways * comb(n - 1 + exp, exp) % MOD;
            }

            res = (res + ways) % MOD;
        }

        return res;
    }
};


