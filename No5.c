/*给定一个字符串 s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为 1000。

示例 1：

输入: "babad"
输出: "bab"
注意: "aba" 也是一个有效答案。

示例 2：

输入: "cbbd"
输出: "bb"
*/
bool isPalindrome(char *s)
{
    int start = 0,end = strlen(s);
    while(start <= end)
    {
        if(*s[start] == *s[end])
        {
            start++;
            end--;
            if(end >= start)
                return true;
            continue;
        }
        break;
    }
    return false;
}

char * longestPalindrome(char * s){
    int start = 0,i=0,len = strlen(s);
    if((len == 0) || (len == 1))
    {
        return s;
    }
    for(; i < len; i++)
    {
        for(j = i + 1; j < len; j++)
        {
            
        }
    }
    
}