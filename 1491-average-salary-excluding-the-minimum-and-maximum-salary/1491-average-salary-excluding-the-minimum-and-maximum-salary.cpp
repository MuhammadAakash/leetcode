class Solution {
public:
    double average(vector<int>& salary) {
        int minSalary = INT_MAX;
        int maxSalary = INT_MIN;
        
        int sum = 0;
        
        for(int salary: salary) {
            sum += salary;
            minSalary = min(minSalary, salary);
            maxSalary = max(maxSalary, salary);
        }
        
        return (double)(sum - minSalary - maxSalary) / (double)(salary.size() - 2);
    }
};