class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
            unordered_map<string,string> as;
            for(int i=0;i<knowledge.size();i++)
                as.insert({knowledge[i][0],knowledge[i][1]});
        int sw=0;
        string st;
        string ans;
        for(int i=0;i<s.length();i++){
            st.clear();
            if(s[i]=='('){
                i++;
                while(true){
                    if(s[i]==')'){
                        
                        break;
                    }
                    else{
                        st+=s[i];
                        i++;
                    }
                }
                if(!as.contains(st)){
                    ans+='?';
                }
                else{
                    ans+=as[st];
                }
            }
            else{
                ans+=s[i];
            }
            }
            // if(flip==1){
            //     st+=s[i];
            // }
            // else{
            //     ans+=s[i]
            // }
            // if(s[i]=='(')
            //     flip=1;
            // else if(s[i]==')')
            //     flip=0;
            
        
        return ans;
    }
};