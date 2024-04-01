impl Solution {
    pub fn length_of_last_word(s: String) -> i32 {
        let words: Vec<&str> = s.trim().split_whitespace().collect();
        match words.last() {
            Some(&last_word) => last_word.len() as i32,
            None => 0,
        }
    }
}