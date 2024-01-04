struct Solution
{
    static int minOperations(const std::vector<int>& nums)
    {
        long num_operations = 0;
        std::unordered_map<long, long> counts;

        for (long n : nums)
            if (counts[n]++ % 3 == 0)
                ++num_operations;

        for (const auto& [n, c] : counts)
            if (c == 1)
                return -1;

        return num_operations;
    }
};