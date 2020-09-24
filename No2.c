/*给出两个?非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照?逆序?的方式存储的，并且它们的每个节点只能存储?一位?数字。

如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。

您可以假设除了数字 0 之外，这两个数都不会以 0?开头。

示例：

输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int calListnum(struct ListNode* l1)
{
    int length = 1;
    struct ListNode *p = l1;
    if(p == NULL)
    {
        return 0;
    }
    while(NULL != p->next)
    {
        length++;
        p = p->next;
    }
    return length;
}

int addTwoSingleNumbers(struct ListNode* l1, struct ListNode* l2)
{
    if((l1 == NULL) && (l2 != NULL))
        return l2->val;
    if((l2 == NULL) && (l1 != NULL))
        return l1->val;
    if((l1 == NULL) && (l2 == NULL))
        return 0;
    return l1->val+l2->val;
}

int getBiggerNumber(int num1, int num2)
{
    if(num1 >= num2)
        return num1;
    else
        return num2;
}

void rehandleList(struct ListNode* newList)
{
    struct ListNode *node;
    struct ListNode *newnode;
    for(node = newList; node != NULL; node = node->next)
    {
        if(node->val >= 10)
        {
            if(node->next == NULL)
            {
                newnode = calloc(1, sizeof(struct ListNode));
                node->next = newnode;
            }
            node->val -= 10;
            node->next->val ++;
            printf("node->next->val %d\n",node->next->val);
        }
        printf("node->val %d\n",node->val);
    }
    return;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){

    struct ListNode *newList,*listTmp;
    struct ListNode *list1 = l1;
    struct ListNode *list2 = l2;
    int list1Num = calListnum(l1);
    int list2Num = calListnum(l2);
    //计算节点最大数
    int listNum = getBiggerNumber(list1Num, list2Num);
    //申请头节点
    newList = calloc(1, sizeof(struct ListNode));
    listTmp = newList;
    for(listNum; listNum > 0; listNum--)
    {   
        listTmp->val = addTwoSingleNumbers(list1, list2);
        printf("%d",listTmp->val);
        //每次都需要申请新节点，共 listNum-1 个
        if(listNum == 1)
            break;
        listTmp->next = calloc(1, sizeof(struct ListNode));
        listTmp = listTmp->next;
        if(list1 != NULL)
            list1 = list1->next;
        if(list2 != NULL)
            list2 = list2->next;           
    }
    rehandleList(newList);
    return newList;
}
