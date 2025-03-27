class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int items_to_replace_pointer = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i-1]) {

                nums[items_to_replace_pointer] = nums[i];
                items_to_replace_pointer++;
            }
        }
    return items_to_replace_pointer;
    }

};