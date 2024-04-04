impl Solution {
    pub fn max_depth(s: String) -> i32 {
        s.chars().fold((0, 0), |(depth_cnt, final_cnt), c| {
            let depth_cnt = match c {
                '(' => depth_cnt + 1,
                ')' => depth_cnt - 1,
                _ => depth_cnt,
            };
            (depth_cnt, final_cnt.max(depth_cnt))
        }).1
    }
}