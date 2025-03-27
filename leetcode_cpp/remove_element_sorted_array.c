class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int items_to_replace_pointer = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val) {


                nums[items_to_replace_pointer] = nums[i];
                items_to_replace_pointer++;
            }
        }

    return items_to_replace_pointer;

    }
};

