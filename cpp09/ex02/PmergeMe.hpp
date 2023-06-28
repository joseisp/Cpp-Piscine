/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:42:41 by jinacio-          #+#    #+#             */
/*   Updated: 2023/06/28 20:25:53 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <chrono>
#include <time.h>
#include <bits/stdc++.h>
#include <iomanip>
#include <sys/time.h>

class PmergeMe
{
	private:
		std::vector<int> vec;
		std::deque<int> deq;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe (PmergeMe const &cpy);
		PmergeMe &operator=(PmergeMe const &cpy);

		void init (char **init, int argc);
		void printable(std::string before_or_after);
		template < typename T >
		void MergeSortedIntervals(T & v, int s, int m, int e)
		{
			std::vector<int> temp;

			int i, j;
			i = s;
			j = m + 1;

			while (i <= m && j <= e)
			{
				if (v[i] <= v[j]) {
					temp.push_back(v[i]);
					++i;
				}
				else {
					temp.push_back(v[j]);
					++j;
				}
			}

				while (i <= m) {
					temp.push_back(v[i]);
					++i;
				}

				while (j <= e) {
					temp.push_back(v[j]);
					++j;
				}

				for (int i = s; i <= e; ++i)
					v[i] = temp[i - s];
		}
		template < typename T >
		void MergeSort(T & v, int s, int e)
		{
			if (s < e)
			{
				int m = (s + e) / 2;
				MergeSort(v, s, m);
				MergeSort(v, m + 1, e);
				MergeSortedIntervals(v, s, m, e);
			}
		}
};

#endif
