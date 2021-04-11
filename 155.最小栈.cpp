/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack
{
public:
    /** initialize your data structure here. */
    MinStack()
    {
    }

    void push(int val)
    {
        vec.push_back(val);
        ++m[val];
    }

    void pop()
    {
        --m[*(vec.end() - 1)];
        if (m[*(vec.end() - 1)] == 0)
        {
            m.erase(m.find(*(vec.end() - 1)));
        }

        vec.pop_back();
    }

    int top()
    {
        return *(vec.end() - 1);
    }

    int getMin()
    {
        return m.begin()->first;
    }

private:
    vector<int> vec;
    map<int, int> m;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end
