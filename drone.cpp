#include<iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
};
 
// Function to insert node
void insert(Node** root, int item)
{
    Node* temp = new Node;
    Node* ptr;
    temp->data = item;
    temp->next = NULL;
 
    if (*root == NULL)
        *root = temp;
    else {
        ptr = *root;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}
 
void display(Node* root)
{
    while (root != NULL) {
        cout << root->data << " ";
        root = root->next;
    }
}
 
Node *arrayToList(vector<int> arr)
{
    Node *root = NULL;
    for (int i = 0; i < arr.size(); i++)
        insert(&root, arr[i]);
   return root;
}

 

void solve(Node* root){
    while (root != NULL) {
        int temp=root->data;
        if(root->next->data > root->data){

        }
        cout << root->data << " ";
        root = root->next;
    }
}

int main(){
     int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    Node* root = arrayToList(v);
    display(root);
    // solve(v);
    return 0;
}