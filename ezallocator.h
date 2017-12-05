#ifndef _EZALLOC_
#define _EZALLOC_

#include <new>
#include <cstddef>
#include <cstdlib>
#include <climits>
#include <iostream>

namespace EZ
{
template <class T>
inline T* _allocator(ptrdiff_t size,T*){
    std::set_new_handler(0);

    return NULL;
}
}

#endif