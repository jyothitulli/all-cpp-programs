class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        ans.reserve(n);
        for(int i=1;i<=n;i++)
        {
            string member;
            if(!(i%15)){
                member="FizzBuzz";
            }
            else if(!(i%3)){
                member="Fizz";
            }
            else if(!(i%5)){
                member="Buzz";
            }
            else{
                member=to_string(i);
            }
            ans.push_back(member);
        }
        return ans;
    }
};
