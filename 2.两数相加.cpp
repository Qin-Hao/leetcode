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
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *root = new ListNode();
        ListNode *cur = root;
        int carry = 0; // 进位
        int temp  = 0;
        while (l1 != nullptr || l2 != nullptr)
        {
            if (l1 == nullptr) // l2 != nullptr
            {
                temp = l2->val + carry;
                l2 = l2->next;
            }
            else if (l2 == nullptr) // l1 != nullptr
            {
                temp = l1->val + carry;
                l1 = l1->next;
            }
            else
            {
                temp = l1->val + l2->val + carry;
                l1 = l1->next;
                l2 = l2->next;
            }

            carry = temp / 10;
            temp %= 10;

            ListNode *node = new ListNode(temp);
            cur->next = node;
            cur = cur->next;
        }
        if (carry == 1)
        {
            ListNode *node = new ListNode(1);
            cur->next = node;
            cur = cur->next;
        }
        return root->next;
    }
};
// @lc code=end
