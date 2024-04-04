impl Solution {
    pub fn max_depth(s: String) -> i32 {
        s.chars().map(|c| if c == '(' { 1 } else if c == ')' { -1 } else { 0 })
            .scan((0, 0), |(depth, max_depth), change| {
                *depth += change;
                *max_depth = (*max_depth).max(*depth);
                Some(*max_depth)
            })
            .last()
            .unwrap_or(0)
    }
}