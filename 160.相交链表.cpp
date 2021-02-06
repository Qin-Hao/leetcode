/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
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
#include <unordered_map>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *pa = headA, *pb = headB;
        unordered_map<ListNode*, bool> m;
        while (pa != nullptr)
        {
            m[pa] = true;
            pa = pa->next;
        }
        while (pb != nullptr)
        {
            if (m[pb] == true)
            {
                return pb;
            }
            pb = pb->next;
        }
        return nullptr;
    }
};
// @lc code=end
