/*
 * Dictionary.cpp
 *
 *  Created on: 31 окт. 2014 г.
 *      Author: Lunix
 */

#include "Dictionary.h"

namespace engocab {

void Dictionary::addContainer(const WordContainer&) {
}

void Dictionary::addRecord(const WordRecord&) {

}

bool Dictionary::contains(const WordKey&) {
}

void Dictionary::removeRecord(const WordRecord& record) {
}

WordRecord& Dictionary::getWordRecord(const WordKey&,
		std::string allocator) {
}

std::set<WordContainer&> Dictionary::getContainers() {

}

} /* namespace engocab */
