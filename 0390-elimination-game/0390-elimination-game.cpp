class Solution {
public:
    int lastRemaining(int n) {
        int head=1, step=1;
        bool direction=true; // true for forward direction
        while (n>1) {
            if (direction || n % 2 == 1)
                head+=step;
            
            step*=2;
            n/=2;
            direction=!direction;
        }
        return head;
    }
};