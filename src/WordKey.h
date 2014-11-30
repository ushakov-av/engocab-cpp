/*
 * WordKey.h
 *
 *
 */

#ifndef SRC_WORDKEY_H_
#define SRC_WORDKEY_H_

#include <string>
#include <cstddef>
#include <functional>

#include "PartOfSpeech.h"

namespace engocab {

class WordKey {

	std::string mWord;

	PartOfSpeech mPartOfSpeech;

	int mNumber;

public:
	WordKey();

	WordKey(const WordKey&) = default;

	WordKey(const std::string& word, PartOfSpeech partOfSpeech, int number);

	virtual ~WordKey() = default;

	bool operator==(const WordKey&);

	bool operator==(const WordKey&) const;

	std::string getWord() const { return mWord;	}

	PartOfSpeech getPartOfSpeech() const { return mPartOfSpeech; }

	int getNumber() const { return mNumber; }

};

}

namespace std {
	template<> struct hash<engocab::WordKey> {
		typedef engocab::WordKey argument_type;
		typedef size_t result_type;
		result_type operator()(const argument_type& f) const {
			result_type result = std::hash<std::string>()(f.getWord());
			result = 31 * result + std::hash<int>()(f.getPartOfSpeech());
			result = 31 * result + std::hash<int>()(f.getNumber());
			return result;
		}
	};
}

#endif /* SRC_WORDKEY_H_ */
