/*
 * ImplementationClass.cpp
 *
 *  Created on: 17 avr. 2017
 *      Author: hnnguyen
 */

#include "../includes/ImplementationClass.h"

namespace DesignPatterns {

namespace Enterprise {

HelloWorldString* HelloWorldStringImplementation::getHelloWorldString() {
	StringFactory *factory = StringFactory::getInstance();
	HelloWorldString* s = factory->createHelloWorldString("Hello, World!");
	return s;
}

StatusCodeImplementation::StatusCodeImplementation(int code): code(code) {
}

int StatusCodeImplementation::getStatusCode() {
	return code;
}

PrintStrategyImplementation::PrintStrategyImplementation() {

}

IStatusCode* PrintStrategyImplementation::setupPrinting() {
	try {
//		printOut = &std::cout;
		return new StatusCodeImplementation(0);
	} catch (std::exception &e){
		return new StatusCodeImplementation(-1);
	}
}

IStatusCode* PrintStrategyImplementation::print(IHelloWorldString* string) {
	try {
		std::cout << string->getHelloWorldString()->getHelloWorldString() + "\n";
		return new StatusCodeImplementation(0);
	} catch (std::exception& e) {
		return new StatusCodeImplementation(-1);
	}
}

IHelloWorldString* HelloWorldImplementation::getHelloWorld() {
	IHelloWorldString* string = new HelloWorldStringImplementation();
	return string;
}

IPrintStrategy* HelloWorldImplementation::getPrintStrategy() {
	PrintStrategyFactory* factory = PrintStrategyFactory::getInstance();
	return factory->createIPrintStrategy();
}

IStatusCode* HelloWorldImplementation::print(IPrintStrategy& strategy, IHelloWorldString& toPrint) {
	IStatusCode* code = strategy.print(*toPrint);
	return code;
}

} /* namespace Enterprise */

}  /* namespace DesignPatterns */
