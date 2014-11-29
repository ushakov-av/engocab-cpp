/*
 * Example.h
 *
 *  Created on: 31 окт. 2014 г.
 *      Author: Lunix
 */

#ifndef SRC_EXAMPLE_H_
#define SRC_EXAMPLE_H_

#include <string>

namespace engocab {

class Example {

	std::string mWordExample;

	std::string mTranslationExample;

	std::string mPhrase;

public:

	Example() = default;

	Example(std::string wordExample, std::string translationExample, std::string phrase);

	virtual ~Example() = default;

	std::string getWordExample() const { return mWordExample; }

	std::string getTranslationExample() const { return mTranslationExample; }

	std::string getPhrase() const { return mPhrase; }
};

}
#endif /* SRC_EXAMPLE_H_ */
