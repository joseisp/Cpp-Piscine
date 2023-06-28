/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:56:15 by jinacio-          #+#    #+#             */
/*   Updated: 2023/06/28 20:25:25 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe (PmergeMe const &cpy)
{
	*this = cpy;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &cpy)
{
	if(this == &cpy)
		return *this;
	this->deq = cpy.deq;
	this->vec = cpy.vec;
	return *this;
}

void PmergeMe::printable (std::string before_or_after)
{
	size_t i = 0;
	if (before_or_after == "Before")
		std::cout << "Before: ";
	else
		std::cout << "After: ";
	while (i < this->vec.size())
	{
		if (i < 5 )
			std::cout << this->vec[i] << " ";
		else
		{
			std::cout << "[...] " << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "\n";
}

void PmergeMe::init(char **init, int argc)
{
	struct timeval start, end;
	double time_taken;

	for (int i = 0; i < argc - 1; i++)
	{
		try
		{
			int aux = std::stoi(init[i + 1]);
			if (aux < 0)
			{
				std::cout << "Error..." << std::endl;
				exit(0);
			}
			this->vec.push_back(aux);
			this->deq.push_back(aux);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error... Out of range" << '\n';
			exit(0);
		}

	}

	this->printable("Before");
	gettimeofday(&start, NULL);
	std::ios_base::sync_with_stdio(false);
	this->MergeSort(this->vec, 0, this->vec.size() - 1);
	this->printable("After");
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
