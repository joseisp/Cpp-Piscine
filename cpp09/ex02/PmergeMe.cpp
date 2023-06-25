/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:56:15 by jinacio-          #+#    #+#             */
/*   Updated: 2023/06/25 20:06:28 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}

void PmergeMe::printable ()
{
	size_t i = 0;
	std::cout << "After: ";
	while (i < this->vec.size())
	{
		if (i < 5 )
			std::cout << this->vec[i] << " ";
		else
		{
			std::cout << "[...] " << std::endl;
			break;
		}
		i++;
	}
}

void PmergeMe::init(char **init, int argc)
{
	//int n1 = 0;
	struct timeval start, end;
	double time_taken;

	std::cout << "Before: ";
	for (int i = 0; i < argc - 1; i++)
	{
		int aux = std::stoi(init[i + 1]);
		this->vec.push_back(aux);
		this->deq.push_back(aux);
		if (i < 5)
			std::cout << aux << " ";
		else if (i == 5)
			std::cout << "[...]";
	}
	std::cout << "\n";

	gettimeofday(&start, NULL);
	std::ios_base::sync_with_stdio(false);
	this->MergeSort(this->vec, 0, this->vec.size() - 1);
	this->printable();
	gettimeofday(&end, NULL);
	time_taken = (end.tv_sec - start.tv_sec) * 1e6;
	time_taken = (time_taken + (end.tv_usec - start.tv_usec)) * 1e-6;
	std::cout << "Time to process a range of "<< argc - 1
				<< " elements with std::Vector " <<  std::fixed << time_taken
				<< std::setprecision(6) << " secs" <<std::endl;

	gettimeofday(&start, NULL);
	std::ios_base::sync_with_stdio(false);
	this->MergeSort(this->deq, 0, this->deq.size() - 1);
	gettimeofday(&end, NULL);
	time_taken = (end.tv_sec - start.tv_sec) * 1e6;
	time_taken = (time_taken + (end.tv_usec - start.tv_usec)) * 1e-6;
	std::cout << "Time to process a range of "<< argc - 1
				<< " elements with std::Deque " <<  std::fixed << time_taken
				<< std::setprecision(6) << " secs"<< std::endl;

}
