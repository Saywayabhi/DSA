class ExamRoom {
public:
    set<int> s;
    int cap;
    ExamRoom(int n) {
        cap=n;
    }
    
    int seat() {
        if(s.empty()){
            s.insert(0);    return 0;
        }
        if(s.size()==1 && *s.begin()==0){
            s.insert(cap-1);    return cap-1;
        }

        int dis=0;
        int cur=0;
        auto it=s.begin();
        dis=*it;
        if(dis==0)
            it++;
        while(it!=s.end())
        {
            int mid_dis;
            if(it!=s.begin())
                mid_dis=(*it-*prev(it))/2;
            else
                mid_dis=(*it)/2;
            if(dis<mid_dis)
            {
                dis=mid_dis;
                cur=*prev(it)+dis;
            }        
            it++;
        }
        if(dis< (cap-1)-*(s.rbegin()))
            cur=cap-1;

        s.insert(cur);
        return cur;
    }
    
    void leave(int p) {
        s.erase(p);
    }
};