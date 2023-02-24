#include <iostream>
#include <stack>
#include <string>
using namespace std;

/*
Input Format. Input contains one string 𝑆 which consists of big and small latin letters, digits, punctuation
marks and brackets from the set []{}().
Constraints. The length of 𝑆 is at least 1 and at most 105
.
Output Format. If the code in 𝑆 uses brackets correctly, output “Success" (without the quotes). Otherwise,
output the 1-based index of the first unmatched closing bracket, and if there are no unmatched closing
brackets, output the 1-based index of the first unmatched opening bracket
*/

struct Bracket {
    Bracket(char type, int position):
        type(type),
        position(position)
    {}

    bool Matchc(char c) {
        if (type == ']' && c == '[')
            return true;
        if (type == '}' && c == '{')
            return true;
        if (type == ')' && c == '(')
            return true;
        return false;
    }

    char type;
    int position;
};

int main() {
    string text="";
    getline(cin, text);

    stack <Bracket> opening_brackets_stack;
    for (int position = 0; position < text.length(); position++) {
        char next = text[position];
        Bracket b = Bracket(next,position);

        if (next == '(' || next == '[' || next == '{') {
            opening_brackets_stack.push(b);

        }

        if (next == ')' || next == ']' || next == '}') {
        	if(opening_brackets_stack.empty() ){
        		opening_brackets_stack.push(b);
        		break;
			}
           else if ( b.Matchc(opening_brackets_stack.top().type))
           {
            opening_brackets_stack.pop();
           }
           else{
           	opening_brackets_stack.push(b);
        		break;
		   }
        }
    }

    if(opening_brackets_stack.empty())
    {
        cout<<"Success";
    }
    else{
        cout<<opening_brackets_stack.top().position+1;
    }

    return 0;
}