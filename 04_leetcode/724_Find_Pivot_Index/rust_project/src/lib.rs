pub struct Solution {}
impl Solution {
    pub fn pivot_index(nums: Vec<i32>) -> i32 {
        let mut pivot_index = -1;
        if nums.len() == 0 {
            return pivot_index;
        }

        let mut left_sum = 0;
        let mut right_sum = nums.iter().sum();
        let mut cur_idx = 0;
        while cur_idx < nums.len() {
            right_sum -= nums[cur_idx];
            if left_sum == right_sum {
                pivot_index = cur_idx as i32;
                break;
            }
            left_sum += nums[cur_idx];
            cur_idx += 1;
        }

        pivot_index
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn pivotindex_empty_array() {
        let nums = vec![];
        let pivotindex = Solution::pivot_index(nums);
        let pivotindex_exp = -1;

        assert_eq!(pivotindex, pivotindex_exp);
    }

    #[test]
    fn pivotindex_all_zero() {
        let nums = vec![0, 0, 0];
        let pivotindex = Solution::pivot_index(nums);
        let pivotindex_exp = 0;

        assert_eq!(pivotindex, pivotindex_exp);
    }

    #[test]
    fn pivotindex_last_index() {
        let nums = vec![1, -1, 0];
        let pivotindex = Solution::pivot_index(nums);
        let pivotindex_exp = 2;

        assert_eq!(pivotindex, pivotindex_exp);
    }
}