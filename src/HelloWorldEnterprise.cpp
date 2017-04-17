/*
 * HelloWorldEnterprise.cpp
 *
 *  Created on: 17 avr. 2017
 *      Author: hnnguyen
 */

#include "../includes/HelloWorldEnterprise.h"

namespace DesignPatterns {

namespace Enterprise {

HelloWorldEnterprise* HelloWorldEnterprise::instance = new HelloWorldEnterprise();

HelloWorldEnterprise::HelloWorldEnterprise() {
//	std::cout << "HelloWorldEnterprise::HelloWorldEnterprise\n";
	HelloWorldFactory* factory = HelloWorldFactory::getInstance();
	IHelloWorld* helloWorld = factory->createHelloWorld();
	IHelloWorldString* helloWorldString = helloWorld->getHelloWorld();
	IPrintStrategy* printStrategy = helloWorld->getPrintStrategy();
	IStatusCode* code = helloWorld->print(printStrategy,helloWorldString);
	if (code->getStatusCode() != 0) {
		throw std::runtime_error("Failed to print: ");
	}
}

void HelloWorldEnterprise::instantiateHelloWorldMainClassAndRun() {
//	std::cout << ">>>HelloWorldEnterprise::instantiateHelloWorldMainClassAndRun\n";
//	instance = new HelloWorldEnterprise();
}

}  /* namespace Enterprise */

} /* namespace DesignPatterns */
