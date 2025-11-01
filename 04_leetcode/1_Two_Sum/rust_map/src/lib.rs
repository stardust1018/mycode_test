use std::collections::HashMap;

struct Solution {}

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut idx_vec: Vec<i32> = Vec::new(); // 创建Vec，返回值

        let mut num_map: HashMap<i32, i32> = HashMap::new(); // 创建一个HashMap
        for (idx_num, &num) in nums.iter().enumerate() {
            if let Some(&idx) = num_map.get(&(target - num)) {
                idx_vec.push(idx);
                idx_vec.push(idx_num as i32);
                break;
            }

            num_map.insert(num, idx_num as i32); // 当map查询不到时，将当前值和对应idx存入map
        }

        idx_vec
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn it_works_1() {

        let nums = vec![2,7,11,15];
        let target = 9;
        let lcs = Solution::two_sum(nums, target);

        let rcs = vec![0, 1];
        assert_eq!(lcs, rcs);
    }

    #[test]
    fn it_works_2() {
        let nums = vec![3,2,4];
        let target = 6;
        let lcs = Solution::two_sum(nums, target);

        let rcs = vec![1, 2];
        assert_eq!(lcs, rcs);
    }

    #[test]
    fn it_works_3() {
        let nums = vec![3,3];
        let target = 6;
        let lcs = Solution::two_sum(nums, target);

        let rcs = vec![0, 1];
        assert_eq!(lcs, rcs);
    }
}