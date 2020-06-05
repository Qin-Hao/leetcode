/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        if (l1->val == 0 && l1->next == nullptr) return l2;
        if (l2->val == 0 && l2->next == nullptr) return l1;

        int flag = 0; // 进位
        ListNode *p;

        ListNode *ans = new ListNode((l1->val + l2->val) % 10);
        flag = (l1->val + l2->val) / 10;
        l1 = l1->next;
        l2 = l2->next;

        p = ans;

        while (l1 != nullptr || l2 != nullptr)
        {
            if (l1 == nullptr) l1 = new ListNode(0);
            if (l2 == nullptr) l2 = new ListNode(0);

            ListNode *t = new ListNode((l1->val + l2->val + flag) % 10);
            flag = (l1->val + l2->val + flag) / 10;

            p->next = t;
            p = p->next;

            l1 = l1->next;
            l2 = l2->next;
        }

        if (flag) p->next = new ListNode(flag);

        return ans;
    }
};
// @lc code=end

