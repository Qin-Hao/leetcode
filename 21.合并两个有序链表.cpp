/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {} // //初始化当前结点值为x,指针为空
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1) {
            return l2;
        } else {
            if (!l2) {
                return l1;
            }
        }
        ListNode *p;
        if (l1->val <= l2->val) {
            p = l1;
            l1 = l1->next;
        } else {
            p = l2;
            l2 = l2->next;
        }
        ListNode *ans = p;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                p->next = l1;
                p = p->next;
                l1 = l1->next;
            } else if (l1->val == l2->val) {
                p->next = l1;
                p = p->next;
                l1 = l1->next;
                p->next = l2;
                p = p->next;
                l2 = l2->next;
            } else if (l1->val > l2->val) {
                p->next = l2;
                p = l2;
                l2 = l2->next;
            }
        }
        if (l1) {
            p->next = l1;
        }
        if (l2) {
            p->next = l2;
        }
        return ans;
    }
};
// @lc code=end

