/*
 * WordContainer.h
 *
 *  Created on: 31 окт. 2014 г.
 *      Author: Lunix
 */

#ifndef SRC_WORDCONTAINER_H_
#define SRC_WORDCONTAINER_H_

#include <vector>

#include "WordKey.h"
#include "WordRecord.h"

namespace engocab {

class WordContainer {

	WordKey mWordKey;

	std::vector<WordRecord> mRecords;

public:
	WordContainer(const WordKey&);

	virtual ~WordContainer();

	WordKey& getWordKey();

	void setWordKey(const WordKey&);

	std::vector<WordRecord>& getRecords();

	void addVector(const WordRecord&);

	bool operator==(const WordContainer&);


};

} /* namespace engocab */

#endif /* SRC_WORDCONTAINER_H_ */
