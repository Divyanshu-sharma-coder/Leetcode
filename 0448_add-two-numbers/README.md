# 448. Add Two Numbers

## 📋 Properties



## 📖 Problem Statement

Problem ID: 448

Slug: add-two-numbers

## 💻 Solution

```cpp
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0); 
        ListNode* curr = &dummy;
        int carry = 0;
        
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;
            
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);

```

## ⚡ Performance Metrics

Performance metrics not available.

## 🎓 Layman's Explanation

### What This Problem Is About

This problem requires careful analysis of the input and constraints. The solution uses appropriate data structures and algorithms to efficiently solve the problem.

### How The Solution Works

1. **Input Analysis:** The solution first analyzes the input to understand the problem constraints.
2. **Algorithm Selection:** Based on the constraints, an appropriate algorithm is chosen.
3. **Implementation:** The algorithm is implemented using efficient data structures.
4. **Output:** The result is returned in the required format.

### Why This Approach

- **Efficiency:** The solution balances time and space complexity.
- **Readability:** The code is clear and easy to understand.
- **Scalability:** The approach works for various input sizes.
