#pragma once
#include <iterator>

namespace algorithms {

	namespace sort {

		//Requires bidirectional iterator at the minimum
		template<typename Iter>
		void Insertion_Sort(Iter begin, Iter end) {

			const Iter beginning = begin;
			begin++;

			for (; begin != end; begin++) {

				Iter key = begin;

				while ( (key != beginning) && ( (*key) < *(std::prev(key)) ) ) {

					std::iter_swap(std::prev(key), key);
					key--;

				}

			}
	
		}

	}

}

