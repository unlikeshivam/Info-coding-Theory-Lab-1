#include <bits/stdc++.h> 
//You can name variable properly. Dont need to include all libraries.
using namespace std; 
  
struct MinHeapNode { 
   
    char data; 
   
    unsigned freq; 
  
    MinHeapNode *left, *right; 
  
    MinHeapNode(char data, unsigned freq) 
  
    { 
  
        left = right = NULL; 
        this->data = data; 
        this->freq = freq; 
    } 
}; 
struct compare { 
  
    bool operator()(MinHeapNode* l, MinHeapNode* r) 
  
    { 
        return (l->freq > r->freq); 
    } 
}; 
void printCodes(struct MinHeapNode* root, string str) 
{ 
  
    if (!root) 
        return; 
  
    if (root->data != '$') 
        cout << root->data << ": " << str << "\n"; 
  
    printCodes(root->left, str + "0"); 
    printCodes(root->right, str + "1"); 
} 
   
void HuffmanCodes(char data[], int freq[], int size) 
{ 
    struct MinHeapNode *left, *right, *top; 
  
    priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> minHeap; 
  
    for (int i = 0; i < size; ++i) 
        minHeap.push(new MinHeapNode(data[i], freq[i])); 
   
    while (minHeap.size() != 1) { 
  
        left = minHeap.top(); 
        minHeap.pop(); 
  
        right = minHeap.top(); 
        minHeap.pop(); 
  
        top = new MinHeapNode('$', left->freq + right->freq); 
  
        top->left = left; 
        top->right = right; 
  
        minHeap.push(top); 
    }  
    printCodes(minHeap.top(), ""); 
} 
  
int main() 
{ 
    int n;
    
    cout <<"No. of Codes : ";
    cin >>n;
    char arr[n] ; 
    int freq[n] ;
    for(int i=0;i<n;i++){
    	cout <<"Code char & freq  e.g(a 12) : ";
    	cin >>arr[i]>>freq[i];
	}
	cout <<endl;
    cout <<"Possible Codes "<<endl;
    HuffmanCodes(arr, freq, n); 
  
    return 0; 
} 
