//地址：https://leetcode.com/problems/two-sum/
//直观思路，两个for循环，O(n^2)解法，但略呆
//进阶思路，用map空间换时间即可
//难度: 一星
package main

func twoSum(nums []int, target int) []int {
	m, l := make(map[int]int), len(nums)
	for i:=0;i < l;i++ {
		m[nums[i]] = i
	}
	for i:=0;i < l;i++ {
		o := target - nums[i]
		if _, b := m[o];b && i!=m[o]{
			return []int{i, m[o]}
		}
	}
	return []int{-1, -1}
}
func main(){
	twoSum([]int, 1)
}