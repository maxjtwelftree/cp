use std::collections::BTreeSet;

impl Solution {
    pub fn find_duplicate(nums: Vec<i32>) -> i32 {
        let mut hashing = BTreeSet::new();

        for num in nums {
            if hashing.contains(&num) {
                return num;
            }
            hashing.insert(num);
        }
        -1
    }
}