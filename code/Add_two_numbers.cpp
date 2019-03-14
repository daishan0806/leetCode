#include<iostream>
using namespace std;
/* list1:2->4->5
 * list2:5->6->3
 *list_res=list1+list2
 *542+365=907
 *list3:7->0->9
 *
 *class ListNode{
 * int val;
 * ListNode* next;
 *ListNode(int x):val(x),next(NULL){};
 *};
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p=l1;
        ListNode *q=l2;
        ListNode *head=new ListNode(0);
        ListNode *m_head=head;
        int flag=0;
        while((p&&q)||flag==1){
            int p_num=p?p->val:0;
            int q_num=q?q->val:0;
            int res=p_num+q_num+flag;
            ListNode *tmp=new ListNode((res)%10);  //flag是防止两数之和大于10 
            flag=res/10;
            
            m_head->next=tmp;
            
            m_head=m_head->next;
            p=p?p->next:NULL;
            q=q?q->next:NULL;
        }
        if(q)
            p=q;
        m_head->next=p;
        return head->next;    
    }
};

int main(){
	
	return 0;
}
