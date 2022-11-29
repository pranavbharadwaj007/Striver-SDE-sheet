#include <bits/stdc++.h>

using namespace std;

class MyQueue {
  public:
    stack < int > input, output;
  MyQueue() {

  }

 
  void push(int x) {
    cout << "The element pushed is " << x << endl;
    input.push(x);
  }

  int pop() {
    // shift input to output 
    if (output.empty())
      while (input.size())
        output.push(input.top()), input.pop();

    int x = output.top();
    output.pop();
    return x;
  }


  int top() {
    // shift input to output 
    if (output.empty())
      while (input.size())
        output.push(input.top()), input.pop();
    return output.top();
  }

  int size() {
    return (output.size() + input.size()); 
  }

};
