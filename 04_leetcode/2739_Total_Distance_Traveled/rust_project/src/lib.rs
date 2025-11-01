use std::cmp::min;

struct Solution{}
impl Solution {
    pub fn distance_traveled(main_tank: i32, additional_tank: i32) -> i32 {
        let mut total_num = 0;
        let mut total_oil = main_tank;
        let mut cut_add_tank = additional_tank;
        while total_oil >= 5 {
            total_num += 5 * 10;
            total_oil -= 5;

            let add_oil = min(1, cut_add_tank);
            cut_add_tank -= add_oil;
            total_oil += add_oil;
        }
        total_num += total_oil * 10;

        total_num
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn it_works_1() {
        let result = Solution::distance_traveled(5, 10);
        assert_eq!(result, 60);
    }

    #[test]
    fn it_works_2() {
        let result = Solution::distance_traveled(9, 2);
        assert_eq!(result, 110);
    }
}   
