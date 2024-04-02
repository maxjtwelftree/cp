impl Solution {
    pub fn find_max_consecutive_ones(nums: Vec<i32>) -> i32 {
        let mut counter = 0;
        let mut final_counter = 0;
        for num in nums {
            if num == 1 {
                counter += 1;
            } else {
                counter = 0;
            }
            final_counter = final_counter.max(counter);
        }
        final_counter
    }
}