class BrowserHistory {
public:
    
    stack<string> prev;
    stack<string> next;
    string curr;

    BrowserHistory(string homepage) {
        curr = homepage;
    }
    
    void visit(string url) {
        prev.push(curr);
        curr = url;

        next = stack<string> ();
    }
    
    string back(int steps) {
     while(steps > 0 && !prev.empty()){
         next.push(curr);
         curr = prev.top();
         prev.pop();
         steps--;
     }
      return curr;
    }
    
    string forward(int steps) {
     while(steps > 0 && !next.empty()){
         prev.push(curr);
         curr = next.top();
         next.pop();
         steps--;
     }
      return curr;   
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */