#include <string>
#include "User.h"
#include "sha1.h"

User::User(std::string& name, std::string& login, std::string& password) :
	_name(name), _login(login) {
	_passwordSha1Hash = sha1(password.c_str(), (uint)password.length());
}

std::string User::getName() const {
	return _name;
}

std::string User::getLogin() const {
	return _login;
}

Block User::getPasswordSha1Hash() const {
	return _passwordSha1Hash;
}