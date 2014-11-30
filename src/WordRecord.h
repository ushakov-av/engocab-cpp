/*
 * WordRecord.h
 *
 *  Created on: 31 окт. 2014 г.
 *      Author: Lunix
 */

#ifndef SRC_WORDRECORD_H_
#define SRC_WORDRECORD_H_

#include <string>
#include <vector>

#include "WordKey.h"
#include "Example.h"
#include "Synonym.h"

namespace engocab {

class WordRecord {

	std::string mId;

	int mIndex;

	WordKey mWordKey;

	std::string mTranslation;

	std::string mTip;

	std::string mDescription;

	std::vector<Example> mExamples;

	std::vector<Synonym> mSynonyms;

	std::vector<std::string> mTags;

public:
	WordRecord(const WordKey&);

	WordRecord(const std::string& id, int index, const WordKey& wordKey,
			const std::string& translation, const std::string& tip, const std::string& description);

	virtual ~WordRecord() = default;

	void addExample(const Example&);

	void addSynony(const Synonym&);

	void addTag(const std::string&);

	bool operator==(const WordRecord&);

	std::string& getId() { return mId; }

};

} /* namespace engocab */

#endif /* SRC_WORDRECORD_H_ */
