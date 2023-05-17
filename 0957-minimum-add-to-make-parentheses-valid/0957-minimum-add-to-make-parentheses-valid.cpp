class Solution {
public:
    int minAddToMakeValid(string s) {
      stack<int>st;
      int amd=0;

        for(int i=0;i<s.size();i++){
        
        if(s[i]=='(')
            st.push(i);
            
        else if (s[i]==')')
          {
           if(!st.empty()&& s[st.top()]=='(')
             st.pop();
            else st.push(i); 
          } 
        }
        while(!st.empty())
        {
      //  s.erase(st.top(),1);
        st.pop();
        amd++;

        }
        return amd;   
    }
};