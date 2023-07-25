class Solution {
public:

	int modulo = 1e9 + 7;

	long long power(long long x , long long y) {
		if (y == 0) return 1;
		long long ans = power(x, y / 2);
		ans = ans * ans;
		ans = ans % mod;
		if (y % 2) { //even
			ans = ans * x;
		}
		ans = ans % modulo;

	}


	long long countGoodNumbers(long long n) {
		long long odd = n / 2;
		long long even = n / 2 + n % 2;

		return (power(5, even) * power(4, odd)) % modulo;

	}
};