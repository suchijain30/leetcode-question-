class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s ;
        for(int i=0 ; i<operations.size(); i++)
        {
            if(operations[i]== "D")
            {
                int a= s.top();
                s.push(2*a);
            }
            else if(operations[i]== "C")
            {
                s.pop();
            }
            else if(operations[i]=="+")
            {
                int b = s.top();  // 10
                s.pop();
                int c = s.top();  // 5
                s.push(b);
                int d = b+c ;
                s.push(d) ;
                
            }
            else
            {
                s.push(stoi(operations[i]));
            }
        }
        int sum =0 ;
        while(!s.empty())
        {
            sum += s.top();
            s.pop();
        }
        return sum ;
    }
};