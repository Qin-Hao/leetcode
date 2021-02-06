/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
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
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution
{
public:
    // 第一想法可以借助 unordered_map 判断节点地址是否已出现，需要使用一定的空间
    // 考虑到 -10^5 <= Node.val <= 10^5，可以利用这个条件用 O(1)内存解决此问题
    bool hasCycle(ListNode *head)
    {
        ListNode *p = head;
        while (p != nullptr)
        {
            if (p->val == 100001)
            {
                return true;
            }
            p->val = 100001;
            p = p->next;
        }
        return false;
    }
};
// @lc code=end
