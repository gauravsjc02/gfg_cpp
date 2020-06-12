vector<string> findMatchedWords(vector<string> dict,
                      string pattern)
{
       //Your code here
       vector <string> v;
       string s="";
       for(int i=0;i<pattern.size()-1;i++)
       {
           if(pattern[i]==pattern[i+1])
           {
               s+='1';
           }
           else
                s+='0';
       }
       
       
       for(int i=0;i<dict.size();i++)
       {
           string s1="";
           for(int j=0;j<dict[i].size()-1;j++)
           {
               if(dict[i][j]==dict[i][j+1])
                    s1+='1';
               else
                    s1+='0';
           }
           if(s1==s)
                v.push_back(dict[i]);
       }
       return v;
}