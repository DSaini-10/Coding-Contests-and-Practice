class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')'||s[i]=='}'||s[i]==']'){
                if(st.size()==0){return 0;}
                char temp= st.top();
                st.pop();

                if(temp =='('&&s[i]!=')'){
                    return false;
                }
                else if(temp =='['&&s[i]!=']'){
                    return false;
                }
                else if(temp =='{'&&s[i]!='}'){
                    return false;
                }
            }
        }
        if(st.size()!=0){
            return 0;
        }
        return true;
    }
};