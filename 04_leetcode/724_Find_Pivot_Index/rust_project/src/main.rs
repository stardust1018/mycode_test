mod lib;

fn main() {
    println!("Hello, world!");

    let nums = vec![1, -1, 0];
    let pivotindex = crate::lib::Solution::pivot_index(nums);
    println!("pivotindex is {}", pivotindex);
}
