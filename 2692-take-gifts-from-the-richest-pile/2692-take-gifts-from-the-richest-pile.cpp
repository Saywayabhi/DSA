class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {

     priority_queue<int>pq;
     
    for(int i=0;i<gifts.size();i++){
        pq.push(gifts[i]);
    }

    int temp;
    for(int i=0;i<k;i++){

     temp = sqrt(pq.top());
     pq.push(temp);
     pq.pop();
    }
    long long int ans=0;
    while(pq.size())
     {
   ans+=pq.top();
   pq.pop();
    }
    return ans;
    }
};