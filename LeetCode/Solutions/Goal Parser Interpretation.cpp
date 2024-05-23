class Solution {
public:
    string interpret(string command) {
        string output;
        int size = command.size();
        for (int i = 0; i < size; i++) {
            if (command[i] == 'G') {
                output += "G";
            } else if (command[i] == '(') {
                if (command[i + 1] == ')') {
                    output += "o";
                } else {
                    output += "a";
                    output += "l";
                }
            }
        }
        return output;
    }
};