#pragma once
#include "sha1.h"

class User
{
public:
	User(std::string& name, std::string& login, std::string& password);	

	std::string getLogin() const;
	std::string getName() const;
	Block getPasswordSha1Hash() const;

private:
	std::string _name;
	std::string _login;	
	Block _passwordSha1Hash;	
};