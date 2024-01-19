//
// Created by Tal on 19/01/2024.
//

#ifndef FACEBOOK_PROJECT_BLACKLIST_H
#define FACEBOOK_PROJECT_BLACKLIST_H
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
class BlackList {
private:
    vector<string> vectorURL;
public:
    BlackList();
    void add(const string& url);
    bool doesExist(const string& url);
};


#endif //FACEBOOK_PROJECT_BLACKLIST_H
