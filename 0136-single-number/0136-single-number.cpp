class Solution {
public:
    int singleNumber (vector <int> &nums)
        {
          if (nums.size () <= 0)
            return -1;
          if (nums.size () == 1)
            return nums[0];
          for (int i = 0; i < nums.size (); i++)
            {
              int freq = std::count (nums.begin (), nums.end (), nums[i]);
              if (freq < 2)
                return nums[i];
            }
          return 0;
        }
};