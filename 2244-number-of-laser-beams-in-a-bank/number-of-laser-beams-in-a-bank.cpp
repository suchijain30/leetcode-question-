class Solution {
public:
int countdevices(string & binary)
{
    int count =0 ;
    for(auto c :binary)
    {
        count +=  c -'0'; 
    }
    return count;
}
    int numberOfBeams(vector<string>& bank) {
        vector<int>devices ;
        for( auto row : bank)
        {
            devices.push_back(countdevices(row));
        }
        int beam =0 ;
        for(int i=0 ; i<devices.size(); i++)
        {
            int j= i+1 ;
            while(j<devices.size())
            {
                beam += devices[i] * devices[j];
                if(devices[j]==0)
                {
                    j++;
                } 
                else
                {
                    break;
                }
            }
        }
        return beam ;
    }
};