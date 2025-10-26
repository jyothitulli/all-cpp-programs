class Bank {
private:
    vector<long long> balance;
     bool isvalid(int account) {
        return 1 <= account && account <= balance.size();
    }
public:
    Bank(vector<long long>& balance) {
        this->balance = balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
    
        if(isvalid(account1) && isvalid(account2) && balance[account1 -1]>=money ){
                balance[account1 -1]-=money;
                balance[account2 -1]+=money;
                return true;
            }
        
        return false;
    }
    
    bool deposit(int account, long long money) {
        if(isvalid(account)){
            balance[account -1]+=money;
            return true;
        }
        return false;
    }
    
    bool withdraw(int account, long long money) {
        if(isvalid(account) && balance[account -1]>=money ){
            balance[account -1]-=money;
            return true;
        }
       
        return false;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance1);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */