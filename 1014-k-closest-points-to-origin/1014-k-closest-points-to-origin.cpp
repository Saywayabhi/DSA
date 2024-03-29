class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> pq;
              for (int i=0; i<k; i++){
            int x= points[i][0];
            int y= points[i][1];
            int val= (x*x)+(y*y);
            pq.push({val,{x,y}});
        }

         for (int i=k; i<points.size(); i++){
            int x= points[i][0];
            int y= points[i][1];
            int val= (x*x)+(y*y);
            if (val < pq.top().first){
                pq.pop();
                pq.push({val,{x,y}});
            }
         }


        vector<vector<int>> ans;
        while (!pq.empty()){
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            ans.push_back({x,y});
            pq.pop();
        }
        return ans;
    

    }
};