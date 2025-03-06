#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {

    // creation
    unordered_map<string, int> m;
    
    // insertion

    // 1
    pair <string, int> p = make_pair("babbar", 3);
    m.insert(p);

    //2
    pair <string, int> pair2("love", 2);
    m.insert(pair2);

    // 3
    m["mera"] = 1;

    // updation
    m["mera"] = 2;

    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;
    cout << m["sumit"] << endl;
    cout << m.size() << endl;
    cout << m.count("bro") << endl;
    cout << m.erase("love") << endl;
    cout << m.size() << endl;

    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end()) {
        cout << it->first << " " << it->second << endl;
        ++it;
    }

}