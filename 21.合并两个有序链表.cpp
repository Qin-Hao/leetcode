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
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution 
{
public:
    struct ListNode 
    {
        int val;
        ListNode *next;
        // 构造函数
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    // 时间复杂度 O(m) m是两个链表中较短的那个的长度
    // 空间复杂度 O(1)
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        // 特殊情况
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;
        // 一般情况
        ListNode* head = new ListNode();
        ListNode* current = head;
        while (l1 != nullptr && l2 != nullptr)
        {
            // 三目运算符的效率与if-else是一样的
            if (l1->val < l2->val)
            {
                current->next = l1;
                l1 = l1->next;
                current = current->next;
            }
            else if (l1->val == l2->val)
            {
                current->next = l1;
                l1 = l1->next;
                current = current->next;

                current->next = l2;
                l2 = l2->next;
                current = current->next;
            }
            else if (l1->val > l2->val)
            {
                current->next = l2;
                l2 = l2->next;
                current = current->next;
            }
        }
        if (l1 != nullptr) current->next = l1;
        if (l2 != nullptr) current->next = l2;
        return head->next;
    }
};
// @lc code=end

