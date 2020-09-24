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
        //���� start �� end ֮����û���ظ��ַ�
        for(i = start; i < end; i++)
        {
            if(s[i] == s[end])
            {
                start = i + 1;
                break;
            }
        }
        //���㳤��
        len = end - start + 1;
        if(len > maxlen)
        {
            maxlen = len;
        }
        end++;
    }

    return maxlen;
}