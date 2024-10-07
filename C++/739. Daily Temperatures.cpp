class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer(temperatures.size(), 0);
        stack<int> st;

        for(int i = 0; i < temperatures.size(); i++)
        {
            while(st.size() != 0 and temperatures[i] > temperatures[st.top()])
            {
                answer[st.top()] = i-st.top();
                st.pop();
            }
            st.push(i);
        }

        return answer;
    }
};