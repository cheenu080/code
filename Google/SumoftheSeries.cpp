//User function Template for C++
class Solution {
private:
	long long gcd(long long int A, long long int B) {
		if (B == 0)
			return A;
		return gcd(B, A % B);
	}

	long long lcm(long long int A, long long int B) {
		return (A / gcd(A, B)) * B;
	}

public:
	long long calculateSum(int N, int A, int B) {
		long long sum1 = 0;
		long long sum2 = 0;
		// long long small = min(A, B);

		for (int i = 1; i <= N; i++) {
			if (i % A == 0) sum1 += i;
			if (i % B == 0) sum2 += i;
		}
		long long sum3 = 0;
		long long commfact = lcm(A, B);


		for (int i = 1; i <= N; i++) {
			if (i % (commfact) == 0) sum3 += i;
		}

		return abs(sum1 + sum2 - sum3 );

	}
};
