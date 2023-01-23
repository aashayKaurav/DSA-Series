Our geek loves to play with strings, Currently, he is trying to reduce the size of a string by recursively removing all the consecutive duplicate pairs. In other words, He can apply the below operations any number of times.

Remove all the consecutive duplicate pairs and concatenate the remaining string to replace the original string.
Your task is to find the string with minimum length after applying the above operations.

Note: If the string length become zero after applying operations, return "-1" as a string.

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
