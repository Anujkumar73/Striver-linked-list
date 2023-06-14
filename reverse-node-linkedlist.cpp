class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *newHead=NULL;
        while(head!=NULL){
            ListNode *next=head->next;
            head->next=newHead;
            newHead=head;
            head=next;
        }
        return newHead;
    }
};

ListNode* reverseList(ListNode* head){
    ListNode *p=NULL,*c=head,*n=head->next;
    while(c!=NULL){
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL)n=n->next;
    }
    return p;
}

