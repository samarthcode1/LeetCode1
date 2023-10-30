class Solution {
public:
    string check(string s)
    {
	    string new_s;
	    int n = s.length();
	    stack<char> st;
        
	    for (int i = 0; i < n; i++)
	    {
		    if (s[i] == '#' && !st.empty())
		    {
		    	st.pop();
		    }
		    else if (s[i] != '#')
			    st.push(s[i]);
	    }

    	while (!st.empty())
	    {
		    new_s = st.top() + new_s;
		    st.pop();
	    }
	    return new_s;
    }
    bool backspaceCompare(string s, string t) {
        string s1=check(s);
        string s2=check(t);
        if(s1==s2){
            return true;
        }
        return false;
    }
};