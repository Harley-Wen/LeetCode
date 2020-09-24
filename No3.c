int lengthOfLongestSubstring(char * s)
{
    int start=0,end=1,i=0,maxlen=1;
    int len=strlen(s);
    if((len == 0) || (len == 1))
    {
        return len;
    }

    while(s[end] != '\0')
    {
        //查找 start 和 end 之间有没有重复字符
        for(i = start; i < end; i++)
        {
            if(s[i] == s[end])
            {
                start = i + 1;
                break;
            }
        }
        //计算长度
        len = end - start + 1;
        if(len > maxlen)
        {
            maxlen = len;
        }
        end++;
    }

    return maxlen;
}