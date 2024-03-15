// Header files

// Day - 15 , Month - 3, Year - 24

class Solution
{
    public:
    void sort(Node **head)
    {
       if(head == nullptr || *head == nullptr){
          return ; //Base Case
       } 
       
       vector<int> dataVector;
       Node* curr = *head;
       while(curr != nullptr){
           dataVector.push_back(curr->data);
           curr = curr->next;
       }
       
       std::sort(dataVector.begin(), dataVector.end()); //Use function
       
       curr = * head; //Update 
       for(int i = 0; i < dataVector.size(); ++i){
           curr-> data = dataVector[i];
           curr = curr->next;
       }
    }
};

// int main()
// {
// 	int test;
// 	cin>>test;
// 	while(test--)
// 	{
// 	    struct Node* head = NULL;
// 	    struct Node* tail = NULL;
// 	    int n, k;
// 	    cin>>n;
// 	    for(int i=0; i<n ;i++){
// 	        cin>>k;
// 	        append(&head, &tail, k);
// 	    }
// 	    Solution ob;
// 	    ob.sort(&head);
// 	    printList(head);
// 	}
// 	return 0;
// }

