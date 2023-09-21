class Solution {
public:
    string reorganizeString(string s) {
        
        string ans = "";
        priority_queue<pair<int,char>>jd;
        int arr[26]={0};
        for(int i=0; i<s.size(); i++)
        {

            int idx = s[i]-'a';
            arr[idx]++;
        }

        for(int i=0; i<26; i++)
        {
            if(arr[i]>0)
            {
                char z = i + 'a';
                jd.push(make_pair(arr[i],z));
            }
        }

        while(jd.size()!=0)
        {

            int count  = jd.top().first;
            char z = jd.top().second;
            jd.pop();

            if(jd.size()==0)
            {
                if(count==1)
                {
                    ans+=z;
                    return ans;
                }
                else
                {
                    return "";
                }
            }
            else
            {
                int count2 = jd.top().first;
                char m = jd.top().second;
                jd.pop();
                ans+=z;
                ans+=m;

                if(count-1>0)
                {
                    jd.push(make_pair(count-1,z));
                }

                if(count2-1>0)
                {
                    jd.push(make_pair(count2-1,m));
                }
            }

        }
        return ans;

    }
};