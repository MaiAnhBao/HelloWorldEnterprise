/*
 * FactoryClass.cpp
 *
 *  Created on: 17 avr. 2017
 *      Author: hnnguyen
 */

#include <iostream>
#include "../includes/FactoryClass.h"

namespace DesignPatterns {

namespace Enterprise {

StringFactory* StringFactory::instance = new StringFactory();
HelloWorldFactory* HelloWorldFactory::instance = new HelloWorldFactory();
PrintStrategyFactory* PrintStrategyFactory::instance =
		new PrintStrategyFactory();

StringFactory* StringFactory::getInstance() {
	return instance;
}

HelloWorldFactory* HelloWorldFactory::getInstance() {
	return instance;
}

PrintStrategyFactory* PrintStrategyFactory::getInstance() {
	return instance;
}

HelloWorldString* StringFactory::createHelloWorldString(std::string str) {
	HelloWorldString* s = new HelloWorldString();
	s->setS(str);
	return s;
}

IHelloWorld* HelloWorldFactory::createHelloWorld() {
	IHelloWorld* helloWorld = new HelloWorldImplementation();
	return helloWorld;
}

IPrintStrategy* PrintStrategyFactory::createIPrintStrategy() {
	IPrintStrategy* printStrategy = new PrintStrategyImplementation();
	IStatusCode* code = printStrategy->setupPrinting();
	if (code->getStatusCode() != 0) {
		throw new std::runtime_error(
				"Failed to create IPrintStrategy: " + code->getStatusCode());
	}
	return printStrategy;
}

} /* namespace Enterprise */

} /* namespace DesignPatterns */
