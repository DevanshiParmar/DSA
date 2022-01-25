/*Devanshi Parmar*/
/*Keep track of maximum element in a stack */

#include <bits/stdc++.h>
using namespace std;

class StackWithMax
{
    stack<int> mainStack;    // main stack
    stack<int> trackStack;// stack to keep track of max element

public:
    void push1(int x){
        mainStack.push(x);
        if (mainStack.size() == 1){
            trackStack.push(x);
            return;
        }

        if (x > trackStack.top()) //If current element is greater than the top element of track stack push the current element to track stack
            trackStack.push(x);
        else
            trackStack.push(trackStack.top()); //otherwise push the element at top of track stack again into it.
    }

    int getMax(){
        return trackStack.top();
    }

    int pop(){
        mainStack.pop();
        trackStack.pop();
    }
};


int main(){

    StackWithMax s;
    s.push1(14);
    cout<< s.getMax()<<endl;
    s.push1(11);
    cout<< s.getMax()<<endl;
    s.push1(54);
    cout<< s.getMax()<<endl;
    s.pop();
    cout<< s.getMax()<<endl;

    return 0;
}
