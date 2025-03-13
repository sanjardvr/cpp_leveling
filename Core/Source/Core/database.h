#ifndef DATABASE_H
#define DATABASE_H

#include <map>
#include <string>

struct User {
    std::string email;
    std::string password;
};

extern std::map<std::string, User> usersDatabase;
extern std::map<std::string, User> univerDatabase;

#endif
