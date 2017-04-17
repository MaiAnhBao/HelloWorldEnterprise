/*
 * AbstractClass.h
 *
 *  Created on: 17 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_ENTERPRISE_INCLUDES_ABSTRACTCLASS_H_
#define DESIGNPATTERNS_ENTERPRISE_INCLUDES_ABSTRACTCLASS_H_

#include "HelloWorldString.h"

namespace DesignPatterns {

namespace Enterprise {

class IHelloWorldString {
public:
	virtual ~IHelloWorldString() = default;
	virtual HelloWorldString* getHelloWorldString() = 0;
};

class IStatusCode {
public:
	virtual ~IStatusCode() = default;
	virtual int getStatusCode() = 0;
};

class IPrintStrategy {
public:
	virtual ~IPrintStrategy() = default;
	virtual IStatusCode* setupPrinting() = 0;
	virtual IStatusCode* print(IHelloWorldString* string) = 0;
};

class IHelloWorld {
public:
	virtual ~IHelloWorld() = default;
	virtual IHelloWorldString* getHelloWorld() = 0;
	virtual IPrintStrategy* getPrintStrategy() = 0;
	virtual IStatusCode* print(IPrintStrategy* strategy, IHelloWorldString* toPrint) = 0;
};

} /* namespace Enterprise */

}  /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_ENTERPRISE_INCLUDES_ABSTRACTCLASS_H_ */
