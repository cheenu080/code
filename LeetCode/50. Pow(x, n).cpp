class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        double halfPow = myPow(x, n / 2);
        if (n % 2 == 0) {
            return halfPow * halfPow;
        }
        else {
            if (n > 0) {
                return halfPow * halfPow * x;
            }
            else {
                return halfPow * halfPow * (1.0 / x);
            }
        }
    }
};
