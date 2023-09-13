class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int N=nums.size();
     priority_queue <int> pq;
     for(int i=0;i<N;i++){
         pq.push(nums[i]);
     }  

     int first = pq.top()-1;
        pq.pop();
        int second =pq.top()-1;
        pq.pop();
       return first*second; 
    }
};