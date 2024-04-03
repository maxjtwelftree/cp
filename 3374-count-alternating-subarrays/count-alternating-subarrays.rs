impl Solution {
    pub fn count_alternating_subarrays(nums: Vec<i32>) -> i64 {
        let (mut x, mut cnt) : (i64, i64) = (1, 1);

        for i in 1..nums.len() {
            cnt = if nums[i - 1] == nums[i] { 1 } else { cnt + 1 };
            x += cnt;
        }

        x as i64
    }
}