class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int con =0;
        int max=0;
        for(auto t:nums){
            if(t==1){con++;}
            if(t==0){con=0;}
            if(con>max){
                max=con;
            }
        }
        return max;
    }
};