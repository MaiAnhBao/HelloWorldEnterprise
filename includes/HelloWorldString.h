/*
 * HelloWorldString.h
 *
 *  Created on: 14 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_ENTERPRISE_HELLOWORLDSTRING_H_
#define DESIGNPATTERNS_ENTERPRISE_HELLOWORLDSTRING_H_

#include <iostream>

namespace DesignPatterns {

namespace Enterprise {

class HelloWorldString {
private:
	std::string s;
public:

	std::string getHelloWorldString() {
		return s;
	}

	void setS(const std::string& s) {
		this->s = s;
	}
};

}  /* namespace Enterprise */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_ENTERPRISE_HELLOWORLDSTRING_H_ */
