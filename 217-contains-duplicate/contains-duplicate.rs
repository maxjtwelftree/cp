use std::collections::HashSet;
use std::iter::FromIterator;

impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let exists: HashSet<i32> = HashSet::from_iter(nums.clone());
        !(&nums.len() == &exists.len())
    }
}