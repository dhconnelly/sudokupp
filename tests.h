#ifndef TESTS_H_
#define TESTS_H_

#include <string>

void deftest(std::string name);
std::string testname();
void assert(bool pred, std::string desc);

#endif
