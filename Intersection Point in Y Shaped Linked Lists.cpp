

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    // int l1=0,l2=0;
    // Node* p=head1,*q=head2;
    // while(p){
    //     l1++;
    //     p=p->next;
    // }
    // while(q){
    //     l2++;
    //     q=q->next;
    // }
    Node* x=head1,*y=head2;
    while(x!=y){
        x=x->next;
        y=y->next;
        if(x==NULL && y==NULL){
            break;
        }
        if(x==NULL){
            x=head2;
        }
        if(y==NULL){
            y=head1;
        }
    }
    if(x!=NULL){
        return x->data;
    }
    return -1;
    
}