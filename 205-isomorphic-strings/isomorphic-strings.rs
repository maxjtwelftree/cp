use std::collections::HashSet;

impl Solution {
    pub fn is_isomorphic(s: String, t: String) -> bool {
        let set: HashSet<(char, char)> = s.chars().zip(t.chars()).collect();
        let char_set_s: HashSet<char> = s.chars().collect();
        let char_set_t: HashSet<char> = t.chars().collect();
        s.chars().count() == t.chars().count() && char_set_s.len() == char_set_t.len() && set.len() == char_set_s.len()
    }
}