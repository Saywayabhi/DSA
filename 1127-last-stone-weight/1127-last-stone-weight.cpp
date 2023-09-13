class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
         int N=stones.size();
        priority_queue<int>ppi;
        for(int i=0;i<N;i++){
            ppi.push(stones[i]);
        }
        
        while(ppi.size() > 1 ){
        int first = ppi.top();
        ppi.pop();
        int second =ppi.top();
        ppi.pop();
        ppi.push(first-second);   
        }
   if(ppi.size()==1){
       return ppi.top();
       ppi.pop();
   }else{
       return 0;
       ppi.pop();
          }
    }

   
};