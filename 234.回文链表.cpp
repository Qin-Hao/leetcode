/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
#include <vector>
using namespace std;
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
    // 双指针
    bool isPalindrome(ListNode *head)
    {
        ListNode *p = head;
        vector<int> val;
        while (p != nullptr)
        {
            val.push_back(p->val);
            p = p->next;
        }
        int p1 = 0, p2 = val.size() - 1;
        while (p1 < p2)
        {
            if (val[p1] != val[p2])
            {
                return false;
            }
            else
            {
                ++p1;
                --p2;
            }
        }
        return true;
    }
};
// @lc code=end
