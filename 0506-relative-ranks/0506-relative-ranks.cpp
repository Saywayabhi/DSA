class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int N=score.size();
     priority_queue<pair<int,int>>ppi;
     vector<string>ans(N);
     for(int i=0;i<N;i++){
         ppi.push({score[i],i});

     }
     int i=1;
     while(!ppi.empty()){
         if(i==1)
         ans[ppi.top().second]="Gold Medal";
         if(i==2)
         ans[ppi.top().second]="Silver Medal";
         if(i==3)
         ans[ppi.top().second]="Bronze Medal";
         else if(i>3)
         ans[ppi.top().second]=to_string(i);
         i++;
         ppi.pop();
     }
     return ans;
    }
};