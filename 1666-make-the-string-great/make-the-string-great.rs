impl Solution {
    pub fn make_good(s: String) -> String {
        s.chars().fold(String::new(), |mut acc, ch| {
            if acc.chars().last().map_or(false, |last| ch != last && ch.eq_ignore_ascii_case(&last)) {
                acc.pop();
            } else {
                acc.push(ch);
            }
            acc
        })
    }
}