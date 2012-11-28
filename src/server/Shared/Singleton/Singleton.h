/*
 * \file Singleton.h
 *
 *  Created on: \date 4 mai 2012
 *      Author: \author joda
 *  \brief :
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_

#include "stdlib.h"
   /*!
     *  \brief Singleton
     *
     * ??
     *
     *  \param
     */
template <typename Tsingleton>
class Singleton
{
public:
	static Tsingleton *getInstance ()
	{
		if(NULL == _singleton)
			_singleton = new Tsingleton;

		return _singleton ;
	}

	static void DestroyInstance()
	{
		if (NULL != _singleton)
		{
			delete _singleton;
			_singleton = NULL;
		}
	}

protected:
	Singleton (){}
	~Singleton() {}

private:
	static Tsingleton * _singleton ;


};
template <typename Tsingleton>
Tsingleton *Singleton<Tsingleton>::_singleton = NULL;

#endif /* SINGLETON_H_ */
