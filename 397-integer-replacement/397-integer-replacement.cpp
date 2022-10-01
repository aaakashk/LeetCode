class Solution {
public:
    int integerReplacement(int n) {
        // int count = 0;
        // while(n != 1) {
        //     if(n & 1) {
        //         if(((n - 1) / 2) % 2 == 0 || n == 3) --n;
        //         else ++n;
        //     }
        //     else n /= 2;
        //     count++;
        // }
        // return count;
        
        int result = 0;
        long long num = n; 
        while(num > 1){
            if(num & 1) {
                cout << num;
                
				// ----------------- Explanation -----------------
				
				//	   Adding 1 :- 
				//     Adding 1 will be helpful when there are multiple 1's at the ending because adding 1 
				//     will flip multiple bits from end reducing our work in further iterations.
				//     Example:- 23 (10111) + 1(00001) = 24(11000)
				//     In next 3 iterations we'll have to take single step of dividing it by 2.
				//     ---- Edge Case ----
				//     3 is an edge case because there adding 1 will take us to 4 which will then take us to 2.
				//     whereas we could have directly gone to 2 by subtracting 1, so we'll have to consider that.
				//     Condition can be written as: if((num & 2) && (num > 3 || (num & (num + 1))))
				
				// 	   Subtracting 1:-
                //     In this case the the 2nd last bit is already 0, adding 1 will be a bad idea as we'll
                //     have to take 2 steps in next iteration as well, so without disturbing the 2nd last bit
                //     we just flip the last bit by subtracting 1.
				//     Example:- 21 (10101) - 1(00001) = 24(10100)
				//     The next 2 iteration we'll have just single step of dividing by 2.
                
                num += ((num & 2) && (num > 3 || (num & (num + 1)))) ? 1 : -1;
                cout << num << endl;
            }
            else
                num = num >> 1;
            result++;
        }
        return result;
    }
};