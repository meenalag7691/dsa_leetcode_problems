#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int stack[1000];
        int top = -1;

        for (int i = 0; i < operations.size(); i++) {

            if (operations[i] == "C") {
                top--;
            }
            else if (operations[i] == "D") {
                stack[top + 1] = 2 * stack[top];
                top++;
            }
            else if (operations[i] == "+") {
                stack[top + 1] = stack[top] + stack[top - 1];
                top++;
            }
            else {
                stack[++top] = stoi(operations[i]);
            }
        }

        int sum = 0;

        for (int i = 0; i <= top; i++) {
            sum += stack[i];
        }

        return sum;
    }
};