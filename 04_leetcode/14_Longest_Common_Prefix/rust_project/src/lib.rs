struct Solution {}
impl Solution {
    pub fn longest_common_prefix(strs: Vec<String>) -> String {
        let mut lsc_str = String::from("");
        if strs.len() == 0 {
            return lsc_str;
        }
        lsc_str = strs[0].clone();
        println!("lsc_str:{}", lsc_str);

        for str in &strs {
            let mut min_len = str.len();
            if min_len > lsc_str.len() {
                min_len = lsc_str.len();
            }
            let mut idx = 1;
            while idx <= min_len {
                let lstr = &lsc_str[0..idx];
                let rstr = &str[0..idx];
                println!("idx:{}, lstr:{}, rstr:{}",idx, lstr, rstr);
                if lstr != rstr {
                    break;
                }
                idx = idx + 1;
            }
            println!("idx new:{}", idx);
            lsc_str = str[0..idx - 1].to_string();
            println!("lsc_str update:{:?}", lsc_str);

            if lsc_str.len() == 0 {
                break;
            }
        }

        lsc_str
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
