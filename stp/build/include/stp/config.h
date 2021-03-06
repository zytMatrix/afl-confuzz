/***********
AUTHORS: Ryan Govostes, Dan Liew

BEGIN DATE: Sept, 2013

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECT
**********************/


#ifndef _CONFIG_H_
#define _CONFIG_H_

#if __cplusplus

/* Where to find <hash_set> or <unordered_set>, if available. */
#define HAVE_HASH_SET 0
#define HASH_SET_H <unordered_set>
#define HASH_SET_CLASS unordered_set
#define HASH_SET_NAMESPACE std

/* Where to find <hash_multiset> or <unordered_multiset>, if available. */
#define HAVE_HASH_MULTISET 0
#define HASH_MULTISET_H <unordered_set>
#define HASH_MULTISET_CLASS unordered_multiset
#define HASH_MULTISET_NAMESPACE std

/* Where to find <hash_map> or <unordered_map>, if available. */
#define HAVE_HASH_MAP 0
#define HASH_MAP_H <unordered_map>
#define HASH_MAP_CLASS unordered_map
#define HASH_MAP_NAMESPACE std

#define STP_VERSION_MAJOR 2
#define STP_VERSION_MINOR 1
#define STP_VERSION "2.1.2"

#endif

#endif
