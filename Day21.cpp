#include<iostream>
#include<stack>
using namespace std;

int main()
{   
    stack<int> nums;
    // nums.push(100);
    nums.push(20);
    // nums.push(30);
    nums.push(40);
    // nums.push(50);
    nums.push(60);
    // nums.push(70);
    nums.push(80);

    int n=nums.size();
    int middle=0;
    if(n%2==0){
        middle=(n/2);
    }else{
        middle=(n/2)+1;
    }
    stack<int> temp;
    for(int i=n;i>middle;i--){
        temp.push(nums.top());
        nums.pop();
    }
    nums.pop();
    while(!temp.empty()){
        nums.push(temp.top());
        temp.pop();
    }
    while(!nums.empty()){
        cout<<nums.top()<<" ";
        nums.pop();
    }

    return 0;
}
