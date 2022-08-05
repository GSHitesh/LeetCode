
// Given elements as nodes of the two linked lists. The task is to multiply these two linked lists, say L1 and L2. 

// Note: The output could be large take modulo 109+7.

// Input:
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow, the first line of each test case contains an integer N denoting the size of the first linked list (L1). In the next line are the space separated values of the first linked list. The third line of each test case contains an integer M denoting the size of the second linked list (L2). In the forth line are space separated values of the second linked list.

long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  long long int num1 = 0,num2=0;
  const long long int mod = 1000000007;
  
  while(l1){
      num1 = (num1*10 + l1->data)%mod; 
      l1 = l1->next;
  }
  
  while(l2){
      num2 = (num2*10 + l2->data)%mod; 
      l2 = l2->next;
  }
  
  return (num1*num2)%mod;
}