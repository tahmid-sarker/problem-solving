class Solution {
public:
    string defangIPaddr(string address) {
        string IP = "";
        int size = address.size();
        for (int i = 0; i < size; i++) {
            if (address[i] != '.') {
                IP += address[i];
            } else {
                IP += "[.]";
            }
        }
        return IP;
    }
};