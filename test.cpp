#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 2};
    auto first = nums.begin();
    auto second = nums.begin() + 1;
    nums.erase(first, second);
    cout << nums.size() << endl;
    cout << *first << endl << *second << endl;
    return 0;
}