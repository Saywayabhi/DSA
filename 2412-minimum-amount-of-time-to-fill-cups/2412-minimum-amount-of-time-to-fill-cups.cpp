class Solution {
public:
    int fillCups(vector<int>& amount) {
        int N=amount.size();
     priority_queue<int>pq;
     for(int i=0;i<N;i++){
         pq.push(amount[i]);
     }  
     int ans=0;

     while(!pq.empty()){
         int first = pq.top();
         pq.pop();
         int second = pq.top();
         pq.pop();
         if(first<=0 && second <=0){
             break;
    }
    first--;
    second--;
    pq.push(first);
    pq.push(second);
    ans++;
     }
     return ans++;
    }
};