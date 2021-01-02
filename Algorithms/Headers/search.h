#pragma once
#if defined DEBUG
#include <iterator>
#endif

namespace algorithms {

	namespace search {

		//Requires forward iterator at the minimum
		//Compare using type of value
		template<typename Iter, typename Val>
		Iter Linear_Search(Iter begin, const Iter end, const Val& value) {
			
#if defined DEBUG
			std::cout << "Iter type: " << typeid(typename std::iterator_traits<Iter>::value_type).name() 
				<< " | Val type: " << typeid(Val).name() << std::endl;
#endif

			for (; begin != end; begin++) {
				
				//static_cast does nothing if type of container 
				//is equal to type of value, no performance loss
				if ( value == static_cast<Val>(*begin) )
					break;

			}

			return begin;

		}
	
		//Requires forward iterator at the minimum
		template<typename Iter>
		Iter Find_Min(Iter begin, Iter end) {

			Iter min = begin;

			if (begin != end) {

				for (; begin != end; begin++) {

					if ((*begin) < (*min))
						min = begin;

				}
			}

			return min;

		}

		//Requires forward iterator at the minimum
		template<typename Iter>
		Iter Find_Max(Iter begin, Iter end) {

			Iter min = begin;

			if (begin != end) {

				for (; begin != end; begin++) {

					if ((*begin) > (*min))
						min = begin;

				}
			}

			return min;

		}
	}
}