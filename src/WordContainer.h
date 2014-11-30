/*
 * WordContainer.h
 *
 * author Alexander V. Ushakov
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

	virtual ~WordContainer() = default;

	WordKey& getWordKey() { return mWordKey; };

	WordKey getWordKey() const { return mWordKey; }

	void setWordKey(const WordKey& wordKey) { mWordKey = wordKey; };

	std::vector<WordRecord>& getRecords() { return mRecords; };

	void addWordRecord(const WordRecord&);

	bool operator==(const WordContainer&);


};

} /* namespace engocab */

#endif /* SRC_WORDCONTAINER_H_ */
