class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(auto str: tokens){
            if(str != "+" && str != "-" && str != "*" && str != "/"){
                st.push(stoi(str));
            }
            else{
                int first = st.top();
                st.pop();

                int second = st.top();
                st.pop();

                if(str == "+"){
                    st.push(second+first);
                }
                else if(str == "-"){
                    st.push(second-first);
                }
                else if(str == "*"){
                    st.push(first*second);
                }
                else if(str == "/"){
                    st.push(second/first);
                }
            }
        }

        return st.top();
    }
};
