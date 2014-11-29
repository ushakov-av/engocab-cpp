/*
 * Synonym.h
 *
 *  Created on: 31 окт. 2014 г.
 *      Author: Lunix
 */

#ifndef SRC_SYNONYM_H_
#define SRC_SYNONYM_H_

#include <string>
#include "WordKey.h"

namespace engocab {

class Synonym {

	std::string mId;

	WordKey mWordKey;

public:
	Synonym(const std::string id, const WordKey& wordKey);

	virtual ~Synonym() = default;

	bool operator==(const Synonym&);

};

} /* namespace engocab */

#endif /* SRC_SYNONYM_H_ */
