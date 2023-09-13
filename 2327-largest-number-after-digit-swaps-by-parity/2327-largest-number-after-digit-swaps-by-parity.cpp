class Solution {
public:
    int largestInteger(int num) {
        // int N=num.size;
    priority_queue<int,vector<int>, greater<int>>odd,even;
   
  int n=num;
  while(n>0){
  int temp= n%10;
  n/=10;
  if(temp%2==0) even.push(temp);
  else odd.push(temp);
  }
   n=num; 
   long long int val=1,ans=0;
   while(n>0){
       int temp=n%10; n/=10;
       if(temp%2==0){
           ans+=val*(even.top());
           even.pop();
           val*=10;
       }
       else{
           ans+=val*(odd.top());
           odd.pop();
           val*=10;
       }
   }  
  return ans;
    }
};