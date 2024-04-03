impl Solution {
    pub fn intersect(nums1: Vec<i32>, nums2: Vec<i32>) -> Vec<i32> {
        let mut mapping = [0; 2000];

        for &x in &nums1 {
            mapping[x as usize] += 1;
        }

        let mut intersection = Vec::new();
        for &x in &nums2 {
            if mapping[x as usize] > 0 {
                intersection.push(x);
                mapping[x as usize] -= 1;
            }
        }

        intersection
    }
}