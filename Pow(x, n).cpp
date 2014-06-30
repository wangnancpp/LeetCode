class Solution {
public:

    inline double square(double x)
    {
        return x*x;
    }
    double pow(double x, int n) {
        if(n<0)
            return 1/pow(x,-(n+1))/x;//in case of 1.00000, -2147483648
        if(n==0)
            return 1;
        if(n%2==0)
            return square(pow(x,n/2));
        else
            return square(pow(x,(n-1)/2))*x;
    }
};