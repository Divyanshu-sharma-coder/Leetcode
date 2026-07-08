# 🚀 LeetCode: Two Sum  

![Thinking](https://media.giphy.com/media/LHZyixOnHwDDy/giphy.gif)  

## 📌 Problem Statement  
Given an array of integers `nums` and an integer `target`, return the **indices** of the two numbers such that they add up to `target`.  

You may assume that each input would have **exactly one solution**, and you may not use the same element twice.  
You can return the answer in any order.  

---

## 🧾 Example  

**Input:**  
```text
nums = [2,7,11,15], target = 9

**Output**
[0, 1]

Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


---

🧠 Approach (Layman’s Analogy)

Imagine you’re at a supermarket 🛒.

You have a shopping list with a target price.

You check items one by one.

For every item, you think: “If I already picked something earlier that completes my total, I’m done.”

You keep a notebook (HashMap 📓) where you write down what you’ve seen.

If the missing piece (complement) is already in the notebook → Boom! ✅ Found the answer.


This way, you only need one pass through the store instead of checking every possible pair (which would be super slow ⏳).


🎬 Visual Representation




---

✅ Time Complexity: O(n)
✅ Space Complexity: O(n)
✅ Uses HashMap for fast lookups.

