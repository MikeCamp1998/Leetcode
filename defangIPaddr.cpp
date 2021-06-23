class Solution {
public:
    string defangIPaddr(string address) {
        
        string delim = ".";
        string newAddress = "";
        int start = 0;
        int end = address.find(delim);
     
        while (end != -1){
            newAddress = newAddress + address.substr(start, end - start) + "[.]";
            start = end + 1;
            cout << start;
            end = address.find(delim, start);
            cout << end;
        }
        newAddress = newAddress + address.substr(start, end - start);
        return newAddress;
    }
};