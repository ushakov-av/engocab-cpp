/*
 * PartOfSpeech.h
 *
 * author Alexander V. Ushakov
 */


#ifndef SRC_PARTOFSPEECH_H_
#define SRC_PARTOFSPEECH_H_

#include <string>
#include <exception>

namespace engocab {

enum PartOfSpeech {
	Noun, Verb, PhrasalVerb, Adverb, Adjective, Preposition
};

std::string partOfSpeechToString(PartOfSpeech pos);

}

#endif
