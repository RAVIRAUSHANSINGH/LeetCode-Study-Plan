//Approach 1
/* not AC due TLE beacuse of N^2 so it is not a optimal solution*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        long long n=nums.size();
        for(long i=0;i<n;i++){
            for(long j=0;j<n;j++){
                if(i==j) continue;
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};

//Approach 2
/* AC time complecity reduced to log n but using sorting
   In this methord we simply sort the array and trversing array once to find 
    the duplicate adjecent elememt  */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        long long n=nums.size();
        sort(nums.begin(),nums.end());
        for(long i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                    return true;
            }
        }
        return false;
    }
};