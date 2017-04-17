/*
 * FactoryClass.h
 *
 *  Created on: 17 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_ENTERPRISE_FACTORYCLASS_H_
#define DESIGNPATTERNS_ENTERPRISE_FACTORYCLASS_H_

#include <stdexcept>
#include "HelloWorldString.h"
#include "AbstractClass.h"
#include "ImplementationClass.h"

namespace DesignPatterns {

namespace Enterprise {

class StringFactory {
private:
	static StringFactory* instance;
public:
	static StringFactory* getInstance();
	HelloWorldString* createHelloWorldString(std::string str);
};

class HelloWorldFactory {
private:
	static HelloWorldFactory* instance;
public:
	static HelloWorldFactory* getInstance();
	IHelloWorld* createHelloWorld();
};

class PrintStrategyFactory {
private:
	static PrintStrategyFactory* instance;
public:
	static PrintStrategyFactory* getInstance();
	IPrintStrategy* createIPrintStrategy();
};

}  /* namespace Enterprise */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_ENTERPRISE_FACTORYCLASS_H_ */
