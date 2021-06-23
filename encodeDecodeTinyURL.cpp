class Solution {
    
public:
    int count = 0;
    unordered_map<string, string> map;
    
    string getCode() {
        count++;
        return to_string(count);
    }
    
    string encode(string longUrl) {
        string code = getCode();
        map[code] = longUrl;
        //cout << "http://tinyurl.com/" + code << endl;
        return code;
    }

    string decode(string shortUrl) {
        //cout << map[shortUrl];
        return map[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));

// Better solution from Discussion
/*
class Solution {
public:
    unordered_map<string, string> codeDB, urlDB;
    const string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    
    string getCode() {
        string code = "";
        for (int i = 0; i < 6; i++) code += chars[rand() % 62];
        return "http://tinyurl.com/" + code;
    }
    
    string encode(string longUrl) {
        if (urlDB.find(longUrl) != urlDB.end()) return urlDB[longUrl];
        string code = getCode();
        while (codeDB.find(code) != codeDB.end()) code = getCode();
        codeDB[code] = longUrl;
        urlDB[longUrl] = code;
        return code;
    }

    string decode(string shortUrl) {
        return codeDB[shortUrl];
    }
};
*/