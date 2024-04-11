class Solution {
public:
    int mySqrt(int x) {
        if(x == 1 || x == 0 )
        {
            return x;
        }

        long int near = 0;

        for(long int i=0;i<=x/2;i++)
        {
            if(i*i <= x)
                near = i ;

            if(i*i >= x)
                break;
        }
        return near;
    }

};