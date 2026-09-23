class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int> st;
        int i = 0;
        while(i<operations.size()){

            if(!st.empty() && operations[i] == "C"){
                st.pop();
            }
            else if(!st.empty() && operations[i] == "D"){
                int ele = st.top()*2;
                st.push(ele);
            }
            else if(!st.empty() && operations[i] == "+"){
                int first = st.top();
                st.pop();
                int second = st.top();
                int sum = first+second;
                st.push(first);
                st.push(sum);
            }
            else{
                st.push(stoi(operations[i]));
            }
            i++;
        }

        int sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};