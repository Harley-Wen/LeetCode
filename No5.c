/*����һ���ַ��� s���ҵ� s ����Ļ����Ӵ�������Լ��� s ����󳤶�Ϊ 1000��

ʾ�� 1��

����: "babad"
���: "bab"
ע��: "aba" Ҳ��һ����Ч�𰸡�

ʾ�� 2��

����: "cbbd"
���: "bb"
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