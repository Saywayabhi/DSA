class Solution {
public:
    string decodeString(string s) {
    stack<char> st;
    for(int i=0;i<s.size();i++){
    if(s[i] !=']'){
          st.push(s[i]);
      }
      else{
          string currStr = "";
          while(st.top() !='['){

              currStr = st.top()+ currStr;
              st.pop();
          }

          st.pop();
          string number = "";

          while(!st.empty()&& isdigit(st.top())){
          number = st.top()+number;
          st.pop();
      }
      int k_time = stoi(number);

      while(k_time--){
          for(int p=0;p<currStr.size();p++)
          st.push(currStr[p]);
      }
    }
    }

     s ="";
    while(!st.empty()){
        s =st.top()+s;
        st.pop();
    }    
    return s;
    }
};