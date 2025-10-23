class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stack;
        for (int i=0 ; i<asteroids.size(); i++) {
            if (asteroids[i] > 0) {
                stack.push_back(asteroids[i]);
            } 
            else 
            {
                while (!stack.empty() && stack.back() > 0 && stack.back() < -asteroids[i]) 
                {
                    stack.pop_back();
                }
                if (!stack.empty() && stack.back() == -asteroids[i]) 
                {
                    stack.pop_back(); 
                } 
                else if (stack.empty() || stack.back() < 0) 
                {
                    stack.push_back(asteroids[i]);
                }
            }
        }
      
        return stack;
    }
};
