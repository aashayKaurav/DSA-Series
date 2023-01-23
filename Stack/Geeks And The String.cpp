string removePair(string s) {
        if(s.size() == 1)
            return s;
        stack<int> st;
        for(int i=0; i < s.size(); i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top() != s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        if(st.empty())
            return "-1";
            
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }