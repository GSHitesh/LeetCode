#include <iostream>
using namespace std;

int maxLevel(int boxes[], int n){
    int result = 1;
    
    int temp;
    
    for(int i=1;i<=n;i++){
        // Just checking whether ith level
        // is possible or not if possible
        // then we must have atleast
        // (i*(i+1))/2 elements in the
        // array
        temp = (i*(i+1))/2;   // no of elements in the pyramid
        if(temp <= n)
            result = i;
        else
            break;
    }
    return result;
}




int main()
{
    int boxes[] = {10, 20, 30, 50, 60, 70};
    int n = sizeof(boxes)/sizeof(boxes[0]);
    cout << maxLevel(boxes, n) << endl;
    return 0;
}