use std::cmp::min;

struct  Solution{}
impl Solution {
    pub fn longest_common_prefix(strs: Vec<String>) -> String {
        let mut lcs = String::from("");
        if strs.len() == 0 {
            return lcs;
        }

        lcs = Self::get_longest_common_prefix(&strs, 0, strs.len() - 1);

        lcs
    }

    pub fn get_longest_common_prefix(strs: &Vec<String>, start: usize, end: usize) -> String {
        if start == end {
            return strs[start].clone();
        }

        let mid = (start + end) / 2;
        let left_lcs = Self::get_longest_common_prefix(&strs, start, mid); // Self表示当前类型
        let right_lcs = Solution::get_longest_common_prefix(&strs, mid + 1, end); // 直接用类型名也可以
        let lcs = Self::get_common_prefix(&left_lcs, &right_lcs);
        lcs
    }

    pub fn get_common_prefix(left: &String, right: &String) -> String {
        let min_len = min(left.len(), right.len());
        
        let mut idx = 1;
        while idx <= min_len {
            let left_slice = &left[0..idx];
            let right_slice = &right[0..idx];
            if left_slice != right_slice {
                break;
            }
            idx = idx + 1; // rust中没有++ 运算符
        }
        let lcs = left[0..idx - 1].to_string();
        lcs
    }
}
#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn it_works_1() {
        let strs = vec!["flower".to_string()];
        let lcs = Solution::longest_common_prefix(strs);
        let result = String::from("flower");

        assert_eq!(lcs, result);
    }

    #[test]
    fn it_works() {
        let strs = vec!["flower".to_string(), "flow".to_string(), "flight".to_string()];
        let lcs = Solution::longest_common_prefix(strs);
        let result = String::from("fl");

        assert_eq!(lcs, result);
    }
}
