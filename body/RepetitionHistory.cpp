#include "RepetitionHistory.h"

RepetitionHistory::RepetitionHistory() = default;
void RepetitionHistory::addPosition(ZobristHash hash) {
	this->hashes.push_back(hash);
}
void RepetitionHistory::clear() {
	this->hashes.clear();
}
//	ћетод дл€ получени€ количества повторений позиции
//	A method for getting the number of repetitions of a position
uint8_t RepetitionHistory::getRepetitionNumber(ZobristHash hash) const {
	uint8_t ctr = 0;
	for (auto hash1 : this->hashes) {
		if (hash == hash1) {
			ctr++;
		}
	}
	return ctr;
}