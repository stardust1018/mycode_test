struct Solution {}
impl Solution {
    pub fn longest_common_prefix(strs: Vec<String>) -> String {
        let mut res = String::new();
        if let Some(str) = strs.get(0) {
            
            for (i, s) in str.chars().enumerate() {
                let mut is_break = false;
                for str1 in strs.iter().skip(1) {
                    if Some(s) != str1.chars().nth(i) {
                        is_break = true;
                        break;
                    }
                }
                
                if is_break {
                    break;
                }

                res.push(s);
            }
        }
        res
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
}