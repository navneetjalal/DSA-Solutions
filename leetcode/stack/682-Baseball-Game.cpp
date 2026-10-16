class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> a;
        for(int i=0;i<op.size();i++){
            if(op[i]=="C"){
                a.pop();
            }
            else if(op[i]=="D"){
                a.push(a.top()*2);
            }
            else if(op[i]=="+"){
                int temp=a.top();
                a.pop();
                int temp2=a.top()+temp;
                a.push(temp);
                a.push(temp2);
            }
            else{
                a.push(stoi(op[i]));
            }
        }
        int ans=0;
        while(a.size()!=0){
            ans+=a.top();
            a.pop();
        }
        return ans;
    }
};