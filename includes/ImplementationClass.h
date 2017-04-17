/*
 * ImplementationClass.h
 *
 *  Created on: 17 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_ENTERPRISE_INCLUDES_IMPLEMENTATIONCLASS_H_
#define DESIGNPATTERNS_ENTERPRISE_INCLUDES_IMPLEMENTATIONCLASS_H_

#include "AbstractClass.h"
#include "FactoryClass.h"
#include <fstream>
#include <iostream>

namespace DesignPatterns {

namespace Enterprise {

class HelloWorldStringImplementation: public IHelloWorldString {
public:
	 HelloWorldString* getHelloWorldString();
};

class StatusCodeImplementation: public IStatusCode {
private:
	int code;
public:
	StatusCodeImplementation(int code);
	int getStatusCode();
};

class PrintStrategyImplementation: public IPrintStrategy {
private:
	std::ofstream printOut;
public:
	PrintStrategyImplementation();
	IStatusCode* setupPrinting();
	IStatusCode* print(IHelloWorldString* string);
};

class HelloWorldImplementation: public IHelloWorld {
public:
	IHelloWorldString* getHelloWorld();
	IPrintStrategy* getPrintStrategy();
	IStatusCode* print(IPrintStrategy* strategy, IHelloWorldString* toPrint);
};

} /* namespace Enterprise */

}  /* namespace DesignPatterns */



#endif /* DESIGNPATTERNS_ENTERPRISE_INCLUDES_IMPLEMENTATIONCLASS_H_ */
