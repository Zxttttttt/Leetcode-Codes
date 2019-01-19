class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows==1){
            return s;
        }
        
        string result="";
        int len=numRows*2-2;
        
        for(int i=0;i<s.length();i+=len){//第一行
            result+=s[i];
        }
        
        for(int i=1;i<numRows-1;i++){//中间numRows-2 行
            
            for(int k=i;k<s.length();k+=len){
                result+=s[k];
                if(k+len-2*i<s.length()){
                    result+=s[k+len-2*i];
                }
            }
        }
        
        for(int i=numRows-1;i<s.length();i+=len){//最后一行
            result+=s[i];
        }
        
        return result;
    }
};
