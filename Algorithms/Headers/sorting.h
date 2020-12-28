#pragma once
#include "search.h"

namespace algorithms {

	namespace sort {

		//Requires bidirectional iterator at the minimum
		template<typename Iter> 
		void Insertion_Sort(Iter begin, const Iter end) {

			const Iter beginning = begin;

			for (; begin != end; begin++) {

				Iter key = begin;

				while ( (key != beginning) && ( (*key) < *(std::prev(key)) ) ) {

					std::iter_swap(std::prev(key), key);
					key--;

				}
			}
		}

		//Requires bidirectional iterator at the minimum
		template<typename Iter>
		void Selection_Sort(Iter begin, Iter end) {

			Iter min;
			for (; begin != end; begin++) {

				min = algorithms::search::Find_Min(begin, end);

				std::iter_swap(begin, min);

			}
		}
	}
}

