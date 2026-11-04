/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        stack<pair<int , int >> st;
        vector<int> ans;
        int i = 0 ;
        while(head != NULL){
            ans.push_back(0);

            while(!st.empty() && head -> val  >  st.top().first){
                auto[val , idx] = st.top();
                st.pop();
                ans[idx] = head -> val;
            }

            st.push({head -> val , i});
            head = head -> next;
            i++;

        }
        return ans;  
    }
};