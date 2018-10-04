/*Given two integers representing the numerator and denominator of a fraction, return the fraction in string format.

If the fractional part is repeating, enclose the repeating part in parentheses.

Example :

Given numerator = 1, denominator = 2, return "0.5"
Given numerator = 2, denominator = 1, return "2"
Given numerator = 2, denominator = 3, return "0.(6)"*/


string Solution::fractionToDecimal(int A, int B) {
    int64_t n = A, d = B;
    
    if(n==0) return "0";
    
    string result = "";
    
    if(n<0 ^ d<0) result += '-';
    
    n = abs(n);
    d = abs(d);
    
    result += to_string((n/d));
    
    if(n%d == 0) return result;
    
    result += '.';
    
     unordered_map<int, int> Hash;
     
    for(int64_t r=n%d; r; r %= d){
        
        if(Hash.find(r)!=Hash.end()){
            result.insert(Hash[r],1,'(');
            result += ')';
            break;
        }    
        
        Hash[r] = result.size();
        
        r *= 10;
        
        result += (char)('0'+(r/d));
        
    }
    return result;
}
