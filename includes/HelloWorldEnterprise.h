/*
 * HelloWorldEnterprise.h
 *
 *  Created on: 17 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_ENTERPRISE_HELLOWORLDENTERPRISE_H_
#define DESIGNPATTERNS_ENTERPRISE_HELLOWORLDENTERPRISE_H_

#include "FactoryClass.h"
#include "AbstractClass.h"
#include "ImplementationClass.h"
#include "stdexcept"

namespace DesignPatterns {

namespace Enterprise {

class HelloWorldEnterprise {
private:
	static HelloWorldEnterprise* instance;
public:
	static void instantiateHelloWorldMainClassAndRun();
	HelloWorldEnterprise();
};

}  /* namespace Enterprise */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_ENTERPRISE_HELLOWORLDENTERPRISE_H_ */
