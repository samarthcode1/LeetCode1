

/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    vector<int>v;
    while(head1 && head2){
        if(head1->data<head2->data){
            head1=head1->next;
        }
        else if(head1->data==head2->data){
            v.push_back(head1->data);
            head1=head1->next;
            head2=head2->next;
        }
        else{
            head2=head2->next;
        }
    }
    Node* newNode=new Node(v[0]);
    Node* curr=newNode;
    for(int i=1;i<v.size();i++){
        curr->next=new Node(v[i]);
        curr=curr->next;
    }
    return newNode;
    
    
}