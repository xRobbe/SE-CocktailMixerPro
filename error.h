/* 
 * File:   error.h
 * Author: robin
 *
 * Created on December 1, 2013, 2:04 PM
 */

#ifndef ERROR_H
#define	ERROR_H

#include <stdexcept>

inline void error( const std::string& s ) { throw std::runtime_error( s ); }
inline void error( const std::string& s1, const std::string& s2 ) { error( s1 + s2 ); }

#endif	/* ERROR_H */