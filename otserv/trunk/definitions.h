//////////////////////////////////////////////////////////////////////
// OpenTibia - an opensource roleplaying game
//////////////////////////////////////////////////////////////////////
// various definitions needed by most files
//////////////////////////////////////////////////////////////////////
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//////////////////////////////////////////////////////////////////////
// $Id$
//////////////////////////////////////////////////////////////////////
// $Log$
// Revision 1.10  2003/10/21 17:55:07  tliffrag
// Added items on player
//
// Revision 1.9  2003/09/08 13:28:41  tliffrag
// Item summoning and maploading/saving now working.
//
// Revision 1.8  2003/05/19 16:48:37  tliffrag
// Loggingin, talking, walking around, logging out working
//
// Revision 1.7  2002/05/28 13:55:56  shivoc
// some minor changes
//
//
//////////////////////////////////////////////////////////////////////

#ifndef __definitions_h
#define __definitions_h

#include <functional>

// functor that enables me to use functors with same types but different algorithms
template<class A, class R> struct unary_functor : public std::unary_function<A,R> {
    virtual R operator() (const A &) = 0;
};

#if defined __WINDOWS__ || defined __MINGW__ 
#include <winsock.h>
typedef SOCKET Socket;
typedef int socklen_t;
#else
typedef signed int Socket;
#endif

template <class T>
void swap(T &x, T &y)
{
  T temp;
 
  temp = x;
  x = y;
  y = temp;
}

//numbers are fixed to match with
//the slot numbers in the protocoll


extern int hexint(const char *src);

#endif // __definitions_h
